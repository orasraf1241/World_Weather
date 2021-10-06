dict_rom = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100}


def roman_to_decimel(string):
    num = 0
    rom_string = [x for x in string]
    for i in range(len(string)):
        if i in dict_rom:
            num += dict_rom.get(rom_string(i))
            print(num)



if __name__ == "__main__":
    roman_to_decimel("XXXI")
