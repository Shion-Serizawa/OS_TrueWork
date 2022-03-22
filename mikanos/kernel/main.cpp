#include <cstdint>

extern "C" void KernelMain(uint64_t frame_buffer_base, uint64_t frame_buffer_size)
{
    // extern "C"はC言語形式で関数を定義することを意味する。

    uint8_t *frame_buffer = reinterpret_cast<uint8_t *>(frame_buffer_base);
    for (uint64_t i = 0; i < frame_buffer_size; ++i)
    {
        frame_buffer[i] = i % 256;
    }

    while (1) __asm__("hlt");
    //__asm__はCでアセンブリ言語の命令を入れ込むときに使う。
    //　hlt, 割り込み？が来るまで停止
}