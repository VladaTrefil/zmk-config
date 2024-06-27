#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#define U_STRINGIFY(x) #x

#define U_MACRO(name,...) \
/ { \
  macros { \
    name: name { \
      compatible = "zmk,behavior-macro"; \
      #binding-cells = <0>; \
      bindings = <BINDING>, <SHIFT_BINDING>; \
      __VA_ARGS__ \
    }; \
  }; \
};
