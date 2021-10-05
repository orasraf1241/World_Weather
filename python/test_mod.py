import unittest
import mod


class ModTest(unittest.TestCase):

    def testEvenNumber(self):
        print("1")
        self.assertTrue(mod.is_even(2))
        self.assertFalse(mod.is_even(1))
        print("1")


    def testZeroCase(self):
        print("2")
        self.assertTrue((mod.is_even(0)))
        print("2")


    def testArgumentMUstBeNumber11(self):
        print("3")
        self.assertRaises(TypeError, mod.is_even, "str")
        print("3")





if __name__ == "__main__":
    unittest.main()
