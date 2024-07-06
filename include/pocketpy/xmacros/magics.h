#ifdef MAGIC_METHOD

// unary operators
MAGIC_METHOD(__repr__)
MAGIC_METHOD(__str__)
MAGIC_METHOD(__hash__)
MAGIC_METHOD(__len__)
MAGIC_METHOD(__iter__)
MAGIC_METHOD(__next__)
MAGIC_METHOD(__neg__)
MAGIC_METHOD(__invert__)
MAGIC_METHOD(__bool__)
// logical operators
MAGIC_METHOD(__contains__)
/////////////////////////////
MAGIC_METHOD(__eq__)
MAGIC_METHOD(__ne__)
MAGIC_METHOD(__lt__)
MAGIC_METHOD(__le__)
MAGIC_METHOD(__gt__)
MAGIC_METHOD(__ge__)
// binary operators
MAGIC_METHOD(__add__)
MAGIC_METHOD(__radd__)
MAGIC_METHOD(__sub__)
MAGIC_METHOD(__rsub__)
MAGIC_METHOD(__mul__)
MAGIC_METHOD(__rmul__)
MAGIC_METHOD(__truediv__)
MAGIC_METHOD(__rtruediv__)
MAGIC_METHOD(__floordiv__)
MAGIC_METHOD(__rfloordiv__)
MAGIC_METHOD(__mod__)
MAGIC_METHOD(__rmod__)
MAGIC_METHOD(__pow__)
MAGIC_METHOD(__rpow__)
MAGIC_METHOD(__matmul__)
MAGIC_METHOD(__lshift__)
MAGIC_METHOD(__rshift__)
MAGIC_METHOD(__and__)
MAGIC_METHOD(__or__)
MAGIC_METHOD(__xor__)
/////////////////////////////
// indexer
MAGIC_METHOD(__getitem__)
MAGIC_METHOD(__setitem__)
MAGIC_METHOD(__delitem__)

// specials
MAGIC_METHOD(__new__)
MAGIC_METHOD(__init__)
MAGIC_METHOD(__call__)
MAGIC_METHOD(__divmod__)
MAGIC_METHOD(__enter__)
MAGIC_METHOD(__exit__)
MAGIC_METHOD(__name__)
MAGIC_METHOD(__all__)
MAGIC_METHOD(__package__)
MAGIC_METHOD(__path__)
MAGIC_METHOD(__class__)
MAGIC_METHOD(__missing__)

#endif