
static struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bpp; /* 3:RGB, 4:RGBA */ 
  unsigned char	 data[32 * 32 * 4 + 1];
} icon = {
  32, 32, 4,
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\200\200\200\377\\\\\\\377@@@\377@@@\377"
  "@@@\377@@@\377\\\\\\\377\200\200\200\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\\\\\\\377@@@\377\307\307\307\377\333\333"
  "\333\377\335\335\335\377\343\343\343\377\330\330\330\377\333\333\333\377"
  "\302\302\302\377\262\262\262\377\\\\\\\377\200\200\200\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\200\200\200\377\275\275\275\377\277\277\277\377\306\306\306\377\320\320"
  "\320\377\321\321\321\377\337\337\337\377\330\330\330\377\325\325\325\377"
  "\310\310\310\377\265\265\265\377\261\261\261\377\260\260\260\377\\\\\\\377"
  "\200\200\200\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\40\40\40\377\0\0"
  "\0\377\40\40\40\377\273\273\273\377\265\265\265\377\266\266\266\377\302\302"
  "\302\377\326\326\326\377\333\333\333\377\313\313\313\377\271\271\271\377"
  "\270\270\270\377\264\264\264\377\303\303\303\377\0\0\0\377\40\40\40\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\40\40\40\377\40\40\40"
  "\377\303\303\303\377\0\0\0\377\40\40\40\377\253\253\253\377\307\307\307\377"
  "\311\311\311\377\271\271\271\377\0\0\0\377\40\40\40\377\304\304\304\377\40"
  "\40\40\377\40\40\40\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377||\267"
  "\377||\267\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377@@@\377\323\323\323\377\273\273\273\377\0\0\0\377\0\0\0\377\227\227\227"
  "\377\245\245\245\377\247\247\247\377\243\243\243\377\0\0\0\377\0\0\0\377"
  "\302\302\302\377\330\330\330\377@@@\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377||\267"
  "\377\0\0\0\377\0\0\0\377||\267\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377@@@\377\334\334\334\377\322\322\322\377\261\261\261\377\227\227\227"
  "\377\202\202\202\377\0\0\0\377\40\40\40\377\214\214\214\377\243\243\243\377"
  "\267\267\267\377\320\320\320\377\334\334\334\377\200\200\200\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377||\267\377\0\0\0\377S\322\25\377S\322\25\377\0\0\0\377\0\0\0\377"
  "||\267\377\246\246\365\377\200\200\200\377\346\346\346\377\300\300\300\377"
  "\360\360\360\377\377\377\377\377\0\0\0\377\0\0\0\377\0\0\0\377\40\40\40\377"
  "\377\377\377\377\360\360\360\377\377\377\377\377\335\335\335\377\200\200"
  "\200\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377||\267\377\0\0\0\377S\322\25\377S\322\25\377S\322\25\377S\322\25"
  "\377S\322\25\377\0\0\0\377\0\0\0\377\303\303\303\377\372\372\372\377\324"
  "\324\324\377\324\324\324\377\324\324\324\377\0\0\0\377\0\0\0\377\0\0\0\377"
  "\40\40\40\377\324\324\324\377\324\324\324\377\324\324\324\377\377\377\377"
  "\377\377\377\377\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377||\267\377\0\0\0\377S\322\25\377S\322\25\377S\322\25\377S\322\25\377"
  "S\322\25\377S\322\25\377S\322\25\377#\203y\377\0\0\0\377\0\0\0\377\303\303"
  "\303\377\360\360\360\377\360\360\360\377\377\377\377\377\255\255\255\377"
  "\324\324\324\377\377\377\377\377\360\360\360\377\360\360\360\377\360\360"
  "\360\377\324\324\324\377\324\324\324\377\341\341\341\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377||\267\377\0\0\0\377//\261\377#\203y\377S\322\25\377S\322\25\377"
  "S\322\25\377S\322\25\377S\322\25\377#\203y\377//\261\377//\261\377//\261"
  "\377\0\0\0\377\0\0\0\377\303\303\303\377\322\322\322\377\317\317\317\377"
  "\313\313\313\377\303\303\303\377\377\377\377\377\324\324\324\377\324\324"
  "\324\377\360\360\360\377\341\341\341\377\341\341\341\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377||\267\377"
  "\0\0\0\377//\261\377//\261\377//\261\377#\203y\377S\322\25\377S\322\25\377"
  "S\322\25\377#\203y\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377\0\0\0\377\0\0\0\377\303\303\303\377\347\347\347\377\332\332\332"
  "\377\324\324\324\377\377\377\377\377\360\360\360\377\300\300\300\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377||\267\377\0\0\0\377//\261\377//\261\377//\261\377//"
  "\261\377//\261\377#\203y\377#\203y\377#\203y\377//\261\377//\261\377//\261"
  "\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377\0\0\0\377"
  "\0\0\0\377\244\244\244\377\310\310\310\377\310\310\310\377@@@\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377||\267\377\0\0\0\377//\261\377//\261\377//\261\377//\261"
  "\377//\261\377//\261\377\232\232\330\377//\261\377//\261\377//\261\377//"
  "\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261"
  "\377//\261\377//\261\377\0\0\0\377\0\0\0\377\304\304\304\377\306\306\306"
  "\377\\\\\\\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377||\267\377\0\0\0\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377\232\232\330\377\332\332\332\377\232\232\330\377//\261\377//\261"
  "\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377//\261\377//\261\377//\261\377\2172\235\377\0\0\0\377\0\0\0\377"
  "@@@\377\246\246\365\377\246\246\365\377\246\246\365\377||\267\377\0\0\0\377"
  "//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//"
  "\261\377\232\232\330\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//"
  "\261\377\2172\235\377\347&\34\377\347&\34\377\347&\34\377\0\0\0\377||\267"
  "\377\246\246\365\377\246\246\365\377||\267\377\0\0\0\377//\261\377//\261"
  "\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377\332\332\332\377//\261\377//\261\377//\261\377//\261\377\241\221"
  "C\377\241\221C\377\241\221C\377\241\221C\377//\261\377//\261\377\2172\235"
  "\377\347&\34\377\347&\34\377\347&\34\377\347&\34\377\347&\34\377\0\0\0\377"
  "||\267\377\246\246\365\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377"
  "//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//"
  "\261\377//\261\377//\261\377\332\332\332\377//\261\377\241\221C\377\350\311"
  ":\377\350\311:\377\350\311:\377\241\221C\377//\261\377//\261\377\2172\235"
  "\377\347&\34\377\347&\34\377\347&\34\377\347&\34\377\347&\34\377\0\0\0\377"
  "||\267\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "||\267\377\0\0\0\377\0\0\0\377//\261\377//\261\377//\261\377//\261\377//"
  "\261\377//\261\377//\261\377//\261\377//\261\377//\261\377\241\221C\377\241"
  "\221C\377\241\221C\377\241\221C\377\241\221C\377//\261\377//\261\377\217"
  "2\235\377\347&\34\377\347&\34\377\347&\34\377\347&\34\377\347&\34\377\0\0"
  "\0\377||\267\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//"
  "\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261"
  "\377\241\221C\377\350\311:\377\350\311:\377\350\311:\377\241\221C\377//\261"
  "\377//\261\377//\261\377\2172\235\377\2172\235\377\347&\34\377\347&\34\377"
  "\0\0\0\377||\267\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//\261\377//\261\377//"
  "\261\377//\261\377//\261\377//\261\377\241\221C\377\350\311:\377\350\311"
  ":\377\350\311:\377\241\221C\377//\261\377//\261\377//\261\377//\261\377/"
  "/\261\377\2172\235\377\2172\235\377\0\0\0\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//\261\377//\261\377//"
  "\261\377//\261\377//\261\377\241\221C\377\241\221C\377\241\221C\377//\261"
  "\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "\0\0\0\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//\261\377//\261\377//\261"
  "\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377//\261\377//\261\377\0\0\0\377||\267\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377"
  "\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//\261\377//\261\377//\261"
  "\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377\0\0\0\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//\261"
  "\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377\0\0\0\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377||\267"
  "\377\0\0\0\377\0\0\0\377//\261\377//\261\377//\261\377//\261\377//\261\377"
  "//\261\377\0\0\0\377||\267\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//\261"
  "\377//\261\377//\261\377//\261\377\0\0\0\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377//\261\377//\261"
  "\377\0\0\0\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377||\267\377\0\0\0\377\0\0\0\377||\267\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365"
  "\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246"
  "\246\365\377\246\246\365\377||\267\377||\267\377\246\246\365\377\246\246"
  "\365\377\246\246\365\377\246\246\365\377\246\246\365\377\246\246\365\377",
};

