import requests
import json
from flask import Flask

app = Flask(__name__)


@app.route('/', methods=['GET'])
def index():
    city = "Jerusalem"
    latlon = requests.get("http://api.openweathermap.org/data/2.5/weather?q=" + city + "&units=metric&appid=96ad0ee0ffa1a71f9a327941c5e3c4b6")
    geo = json.loads(latlon.text)
    lat = str(geo['coord']['lat'])
    lon = str(geo['coord']['lon'])
    res = requests.get(
        "https://api.openweathermap.org/data/2.5/onecall?lat=" + lat + "&lon=" + lon + "&units=metric&exclude=minutely,hourly&appid=96ad0ee0ffa1a71f9a327941c5e3c4b6")
    parsed = json.loads(res.text)

    dict ={0: {'day': parsed['daily'][0]['temp']['day'], 'night': parsed['daily'][0]['temp']['night'],
           'weather': parsed['daily'][0]['weather'][0]['description'],
               'humidity': parsed['daily'][0]['humidity']},
           1: {'day': parsed['daily'][1]['temp']['day'], 'night': parsed['daily'][1]['temp']['night'],
           'weather': parsed['daily'][1]['weather'][0]['description'],
               'humidity': parsed['daily'][1]['humidity']},
           2: {'day': parsed['daily'][2]['temp']['day'], 'night': parsed['daily'][2]['temp']['night'],
           'weather': parsed['daily'][2]['weather'][0]['description'],
               'humidity': parsed['daily'][2]['humidity']},
           3: {'day': parsed['daily'][3]['temp']['day'], 'night': parsed['daily'][3]['temp']['night'],
           'weather': parsed['daily'][3]['weather'][0]['description'],
               'humidity': parsed['daily'][3]['humidity']},
           4: {'day': parsed['daily'][4]['temp']['day'], 'night': parsed['daily'][4]['temp']['night'],
           'weather': parsed['daily'][4]['weather'][0]['description'],
               'humidity': parsed['daily'][4]['humidity']},
           5: {'day': parsed['daily'][5]['temp']['day'], 'night': parsed['daily'][5]['temp']['night'],
           'weather': parsed['daily'][5]['weather'][0]['description'],
               'humidity': parsed['daily'][5]['humidity']},
           6: {'day': parsed['daily'][6]['temp']['day'], 'night': parsed['daily'][6]['temp']['night'],
           'weather': parsed['daily'][6]['weather'][0]['description'],
               'humidity': parsed['daily'][6]['humidity']},
           7: {'day': parsed['daily'][7]['temp']['day'], 'night': parsed['daily'][7]['temp']['night'],
           'weather': parsed['daily'][7]['weather'][0]['description'],
               'humidity': parsed['daily'][7]['humidity']},
           }


    lst = list(dict.items(list))
    return lst


if __name__ == '__main__':
    app.run(debug=True)