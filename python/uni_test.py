import unittest
from classes import Point


class TestPoint(unittest.TestCase):
    def test_create_point(self):
        """Test the Point classes need to success"""
        self.assertRaises(TypeError, Point, ("a", [2, 3, 4]))
        self.assertRaises(TypeError, Point, ("a", 1))

    def test_create(self):
        """this func create point"""
        self.assertRaises(TypeError, Point, ("a", 1))

    def test_equal(self):
        self.assertTrue(Point("a", 2))


if __name__ == '__main__':
    """Testing only one test case using suite"""
    suite = unittest.TestSuite()
    suite.addTest(TestPoint("test_create_point"))
    runner = unittest.TextTestRunner()
    runner.run(suite)
    """Testing all cases"""
    unittest.main()
