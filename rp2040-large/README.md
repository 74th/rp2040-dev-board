# RP2040 large board

RP2040 を手ではんだづけするのにトライしてみた開発ボードです。

Raspberry Pi PICO と同じピンレイアウトで、Flash を好きなサイズのものに置き換えて使うことができます。

RP2040 の実装の際には、細く切ったマスキングテープを使って位置合わせをしてから、実装すると成功率が上がります。

- [回路図 v1.4.0](./rp2040-large-semantics-1.4.0.pdf)
- [PCB v1.4.0](./rp2040-large-pcb-1.4.0.pdf)

![](./photo1.png)

![](./photo2.png)

![](./photo3.png)

![](./photo4.png)

## 部品リスト

### v1.4.0

| ID                         | package                             | Value | Num |
| -------------------------- | ----------------------------------- | ----- | --- |
| C1,C2,C4,C6-C8,C10,C13,C16 | 0805in 2012mm SMD Capacitor         | 100nF | 9   |
| C3,C5,C9                   | 0805in 2012mm SMD Capacitor         | 1uF   | 3   |
| C11,C12                    | 0603in 1608mm SMD Capacitor         | 27pF  | 2   |
| C14,C15                    | 0805in 2012mm SMD Capacitor         | 10uF  | 2   |
| R1,R2                      | 0805in 2012mm SMD Register          | 27.4R | 2   |
| R3,R6,R7                   | 0805in 2012mm SMD Register          | 1kR   | 2   |
| R4,R5                      | 0805in 2012mm SMD Register          | 5.1kR | 2   |
| R8                         | 0805in 2012mm SMD Register          | 10kR  | 1   |
| R9                         | 0805in 2012mm SMD Register          | 200R  | 1   |
| R10                        | 0805in 2012mm SMD Register          | 1R    | 1   |
| U1                         | RP2040                              |       | 1   |
| U2                         | W25Q32BVSSIG                        |       | 1   |
| U3                         | AMS 1117-3.3V                       |       | 1   |
| P1                         | USB 2.0 Type-C MidMount Socket      |       | 1   |
| Y1                         | 3325mm SMD Quartz Resonator Crystal | 12MHz | 1   |
| SW1,SW2                    | 3x4x2.5mm SMD Tactile Switch        |       | 2   |

### v1.3.1

| ID                         | package                             | Value | Num |
| -------------------------- | ----------------------------------- | ----- | --- |
| C1,C2,C4,C6-C8,C10,C13,C16 | 0805in 2012mm SMD Capacitor         | 100nF | 9   |
| C3,C5                      | 0805in 2012mm SMD Capacitor         | 1uF   | 2   |
| C11,C12                    | 0603in 1608mm SMD Capacitor         | 27pF  | 2   |
| C14,C15                    | 0805in 2012mm SMD Capacitor         | 10uF  | 2   |
| R1,R2                      | 0805in 2012mm SMD Register          | 27.4R | 2   |
| R3,R6,R7                   | 0805in 2012mm SMD Register          | 1kR   | 2   |
| R4,R5                      | 0805in 2012mm SMD Register          | 5.1kR | 2   |
| R8                         | 0805in 2012mm SMD Register          | 10kR  | 1   |
| U1                         | RP2040                              |       | 1   |
| U2                         | W25Q32BVSSIG                        |       | 1   |
| U3                         | AMS 1117-3.3V                       |       | 1   |
| P1                         | USB 2.0 Type-C MidMount Socket      |       | 1   |
| Y1                         | 3325mm SMD Quartz Resonator Crystal | 12MHz | 1   |

## 部品の購入先

[../parts/README.md](../parts/README.md)

## トラブルシューティング


(1) ルーペで、USBソケットと、RP2040の接続部分を拡大して、はんだがブリッジしていないか、RP2040 とランドがただしく接続できているか確認してください。

(2) GNDと5Vの間の抵抗値を測り、0Ω になっていないことを確認してください

→ 0 Ωなら、USBソケットの実装に問題がある可能性があります

USB を接続して

(3) レギュレータ AZ1117-3.3 で、GND と 5V、3.3V が計測できるか確認してください

(4) GNDと RP2040 44ピンの電圧が 3.3V になっているか確認してください

→だめなら、USBソケットが実装に問題がある可能性があります

(5) GNDと RP2040 45ピンでの電圧が 1.1V になっているか確認してください

→計測できなければ、内蔵レギュレータの入力の44ピンか、 出力の46ピンの実装に問題がある可能性があります

(6) PCでUSB接続した時にRPI-RP2 ドライブがマウントされるか確認してください

→RP2040 の クリスタルの入出力 20、21 ピンの実装に問題がある可能性があります
→RP2040 の USB DM/DP 46、47ピンの実装に問題がある可能性があります
→クリスタルの実装に問題がある可能性があります

(7) RPI-RP2 ドライブはマウントできるけれど、uf2を入れても再度 RPI-RP2 がマウントされてしまう

→RP2040 の SPI Flash の 51〜56 ピンの実装に問題がある可能性があります

私のところでは、以上のトラブルシューティングでなんとかなっています。
RP2040 のはんだ付けにトライして、失敗したら一度外してやり直しても良いと思います。
