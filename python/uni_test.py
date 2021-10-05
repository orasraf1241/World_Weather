import unittest
import oop_dunders
from oop_dunders import Point


class TestPoint(unittest.TestCase):

    p1 = Point(1, 1)
    p2 = Point(2, 2)

    def test_add(self):
        self.assertRaises(TypeError, Point(), "a")

    def test_equal(self):
        self.assertEqual(self.p1.x, self.p2.x)
        self.assertEqual(self.p1.y, self.p2.y)

if __name__ == "__main__":
    TestPoint.test_add()