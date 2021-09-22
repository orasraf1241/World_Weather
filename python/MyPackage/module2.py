def bar():
    print("bar")


def _bar():
    print("_bar")


__all__ = ['bar', '_bar']
