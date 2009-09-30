
static struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bpp; /* 3:RGB, 4:RGBA */ 
  unsigned char	 data[32 * 32 * 4 + 1];
} icon = {
  32, 32, 4,
  "\315\314\314\377\315\314\314\377\315\314\314\377\315\314\314\377\315\314"
  "\314\377\315\314\314\377\315\314\314\377\315\314\314\377\315\314\314\377"
  "\315\314\314\377\315\314\314\377\315\314\314\377\315\314\314\377\315\314"
  "\314\377\315\314\314\377\315\314\314\377\315\314\314\377\315\314\314\377"
  "\315\314\314\377\315\314\314\377\315\314\314\377\315\314\314\377\315\314"
  "\314\377\315\314\314\377\315\314\314\377\315\314\314\377\315\314\314\377"
  "\315\314\314\377\315\314\314\377\315\314\314\377\315\314\314\377\315\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "|||\377\241\241\241\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\313\313\313\377[c[\377\0\237\0\377\0"
  "\221\0\3770U0\377\214\214\214\377\312\312\312\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\312\312\312\377R\\R\377\0\256\0\377\0\357\0\377\0\357\0\377\0\356\0\377"
  "\0\247\0\377\35W\35\377vvv\377\303\303\303\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\310\310\310\377HSH\377\0\264\0\377\0\357\0\377\0\357"
  "\0\377\0\357\0\377\0\357\0\377\0\357\0\377\0\356\1\377\0>~\377\17\17^\377"
  "aad\377\270\270\270\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\306\306\306\377@@O\377\0\2075\377\0\357\0\377\0\357"
  "\0\377\0\357\0\377\0\357\0\377\0\357\0\377\0\357\0\377\0m\201\377\0\0\357"
  "\377\0\0\357\377\1\1\317\377\6\6k\377LLW\377\247\247\247\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\303\303\303\37777I\377\0\0\277\377\0\0\357\377\0B\255\377\16"
  "\274A\377\217\370\217\377d\360d\377\0\357\0\377\0\206h\377\0\0\357\377\0"
  "\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\335\377\0\0|\37777M\377"
  "\222\222\222\377\313\313\313\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\277\277"
  "\277\37700D\377\0\0\304\377\0\0\357\377\11\11\360\377;;\363\377\\\\\365\377"
  "\377\377\377\377\272\332\272\377\36\263\\\377\13\16\355\377\0\0\357\377\0"
  "\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0"
  "\0\350\377*\0i\377I\"\"\377|||\377\306\306\306\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\274\274\274\377((B\377\1\1\313\377\0\0\357"
  "\377\0\0\357\377??\363\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377ll\350\377\0\0\357\377\0\0\357\377\0\0\357"
  "\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\13\0\344\377\314\0#"
  "\377\356\0\0\377\250\0\0\377N\22\22\377ggg\377\274\274\274\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\266"
  "\266\266\377!!?\377\1\1\316\377\0\0\357\377\0\0\357\377\0\0\357\377++\324"
  "\377\220\220\220\377\314\314\314\377\377\377\377\377\301\301\301\377\241"
  "\241\241\377AA\277\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0"
  "\0\357\377\0\0\357\377\0\0\357\377\217\0`\377\357\0\0\377\357\0\0\377\357"
  "\0\0\377\357\0\0\377\276\0\0\377Y\10\10\377URR\377\256\256\256\377\314\314"
  "\314\377\314\314\314\377\261\261\261\377\33\33=\377\0\0\322\377\0\0\357\377"
  "\0\0\357\377\0\0\357\377\0\0\357\377\5\5\352\377))\300\377\243\243\323\377"
  "\346\346\346\377ll\247\37766\262\377\27\27\323\377\0\0\357\377\0\0\357\377"
  "\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377G\0\250\377\357\0\0\377\357"
  "\0\0\377\357\0\0\377\357\0\0\377\357\0\0\377\357\0\0\377\357\0\0\377\224"
  "\1\1\377\203\203\203\377\314\314\314\377\314\314\314\377\235\235\235\377"
  "\36\36B\377\0\0\260\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0"
  "\0\357\377\0\0\357\377::\255\377iix\377++\260\377\2\2\355\377\275\275\361"
  "\377LL\350\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\23\0\334\377"
  "\331\0\26\377\357\0\0\377\357\0\0\377\357\0\0\377\357\0\0\377\357\0\0\377"
  "\357\0\0\377\354\0\0\377P&&\377\312\312\312\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\306\306\306\377ggg\377\7\7W\377\0\0\324\377\0\0\357"
  "\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357"
  "\377\1\1\356\377jj\306\377''\330\377\0\0\357\377\0\0\357\377\0\0\357\377"
  "\0\0\357\377\2\0\355\377Q\0\235\377\310\0$\377\357\0\0\377\357\0\0\377\357"
  "\0\0\377\357\0\0\377\357\0\0\377\224\0\0\377\222\222\222\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\261\261\261\377>>H\377\0\0}\377\0\0\350\377\0\0\357\377\0\0"
  "\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0"
  "\357\377\215\215\351\377\206\206\354\377\0\0\357\377\17\17\341\377##\316"
  "\377\0\0\357\377\3\0\354\377X\0\227\377\315\0!\377\357\0\0\377\357\0\0\377"
  "\345\0\0\377N44\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\216\216\216\377\32\32<\377\0\0\253\377\0\0\357\377\0\0\357"
  "\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377XX\315\377"
  "UU\321\377##\316\377\325\325'\377\355\355\21\377>>\264\377\0\0\357\377\0"
  "\0\357\377\4\0\353\377Z\0\225\377\316\0!\377|\1\1\377\242\242\242\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\304\304\304\377ccc\377\6\6Q\377\0\0\322\377\0\0\357\377\0\0"
  "\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377**\300\377\353\353"
  "\23\377\377\377\0\377\377\377\0\377\371\371\6\377XX\233\377\0\0\357\377\0"
  "\0\357\377\0\0\357\377\4\0\325\377LDJ\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\256\256\256\37799A\377\0\0y\377\0\0\350"
  "\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377++\200\377\264\264\0"
  "\377\377\377\0\377\377\377\0\377\356\356\0\377SSe\377\0\0\357\377\0\0\357"
  "\377\0\0\357\377\5\5h\377\255\255\255\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\211\211"
  "\211\377\26\26""6\377\0\0\247\377\0\0\357\377\0\0\357\377\0\0\357\377\34"
  "\34\245\377[[\2\377\247\247\0\377\344\344\0\377pp\10\377\24\24\274\377\0"
  "\0\357\377\0\0\357\377\0\0\312\377SSX\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\302\302\302\377___\377\4\4K\377\0\0\316\377\0\0"
  "\357\377\0\0\357\377\37\37\237\377ZZ\6\377^^\15\377\30\30\262\377\0\0\357"
  "\377\0\0\357\377\0\0\357\377\11\11T\377\271\271\271\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\254"
  "\254\254\37744<\377\0\0t\377\0\0\345\377\0\0\357\377\33\33\252\377\23\23"
  "\300\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\266\377ddd\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\204\204\204\377\24\24"
  """0\377\0\0\242\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\357\377\0\0\356"
  "\377\21\21F\377\300\300\300\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\301\301\301\377ZZZ\377\3\3E\377\0\0"
  "\313\377\0\0\357\377\0\0\357\377\0\0\237\377sss\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\250\250\250\377005\377\0\0p\377\0\0\335"
  "\377\33\33;\377\307\307\307\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314"
  "\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314"
  "\314\314\377\314\314\314\377\313\313\313\377\177\177\177\377\22\22\34\377"
  "\204\204\204\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\277\277"
  "\277\377\312\312\312\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314"
  "\314\377\314\314\314\377\314\314\314\377\314\314\314\377\314\314\314\377"
  "\314\314\314\377\314\314\314\377"
};

