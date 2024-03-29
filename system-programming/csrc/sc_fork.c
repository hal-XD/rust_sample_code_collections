
// プロセス = 実行中のプログラム(データセグメントとテキストセグメント)
//           カーネルがプロセスを管理するためのデータ
// プロセスの仮想アドレス空間
// |uエリア|スタック|共有メモリ|データ|テキスト| これらをカーネルのメモリ管理機能が管理している
// システムコール fork で自プロセスのコピーを作成することができる. I/Oのバッファも含めてコピーされる。
// システムコール exec は渡されたプログラムに自分のリソースを明け渡し、自分のPIDを引き継がせて新たなプログラムを実行する

#include <stdio.h>

int main()
{
    printf("HELLO");
    if(fork() == 0) {
        printf("I'm son.\n");
    } else {
        printf("I'm parent.\n");
    }
}
