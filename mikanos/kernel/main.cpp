extern "C" void KernelMain(){
    //extern "C"はC言語形式で関数を定義することを意味する。
    while(1) __asm__("hlt");
    //__asm__はCでアセンブリ言語の命令を入れ込むときに使う。
    //　hlt, 割り込み？が来るまで停止
}