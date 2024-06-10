/* vim: set ft=c tw=174: */

#define SHIFT_FUNCTION(NAME, BINDING, SHIFT_BINDING) \
  / {                                                \
    behaviors {                                      \
    NAME:                                            \
      NAME {                                         \
        compatible = "zmk,behavior-mod-morph";       \
        label = U_STRINGIFY(NAME);                   \
        #binding - cells = <0>;                      \
        bindings = <BINDING>, <SHIFT_BINDING>;       \
        mods = <(MOD_LSFT | MOD_RSFT)>;              \
      };                                             \
    };                                               \
  };

#define SHIFT_MACRO(NAME, BINDING, SHIFT_BINDING)                       \
  U_MACRO(u_macro_##NAME, wait - ms = <0>; bindings = <SHIFT_BINDING>;) \
  SHIFT_FUNCTION(NAME, BINDING, &u_macro_##NAME)

SHIFT_MACRO(u_bt_sel_0, &bt BT_SEL 0, &bt BT_SEL 0 & bt BT_CLR)
SHIFT_MACRO(u_bt_sel_1, &bt BT_SEL 1, &bt BT_SEL 1 & bt BT_CLR)
SHIFT_MACRO(u_bt_sel_2, &bt BT_SEL 2, &bt BT_SEL 2 & bt BT_CLR)
SHIFT_MACRO(u_bt_sel_3, &bt BT_SEL 3, &bt BT_SEL 3 & bt BT_CLR)
SHIFT_MACRO(u_bt_sel_4, &bt BT_SEL 4, &bt BT_SEL 4 & bt BT_CLR)

SHIFT_MACRO(u_reset, &sysreset, &bootloader)
