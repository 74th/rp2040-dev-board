# RP2350A 手はんだ実装挑戦ボード

## v1.0.1

- 回路図 [PDF](./rp2350a-full_v1.0.1_semantics.pdf) [kicanvas]()
- PCB [kicanvas]()

### BOM

| Reference                                 | Name                                  | Quantity |
| ----------------------------------------- | ------------------------------------- | -------- |
| C1,C9,C10,C11,C12,C13,C14,C15,C16,C17,C19 | Capacitor 0603 0.1uF                  | 11       |
| C2,C3,C4,C18                              | Capacitor 0603 4.7uF                  | 4        |
| C5,C6                                     | Capacitor 0603 10pF                   | 2        |
| C7,C8                                     | Capacitor 0603 10uF                   | 2        |
| D1                                        | LED 0805 Blue                         | 1        |
| J1                                        | USB Type-C Receptacle                 | 1        |
| J2                                        | Box Pin Header 2x5 Pitch 1.27mm       | 1        |
| L1                                        | Inductor 0806 3.3uH                   | 1        |
| R1                                        | Register 0603 200Ω                    | 1        |
| R2                                        | Register 0603 1Ω                      | 1        |
| R3,R4                                     | Register 0603 27Ω                     | 2        |
| R5                                        | Register 0603 33Ω                     | 1        |
| R6,R10                                    | Register 0603 1kΩ                     | 2        |
| R7,R8                                     | Register 0603 5.1kΩ                   | 2        |
| R9,R11                                    | Register 0603 10kΩ                    | 2        |
| SW1,SW2                                   | Button SKRPABE010                     | 2        |
| U1                                        | MCU Raspberry Pi RP2350A              | 1        |
| U2                                        | USB Power Protection IC SOT-23 CH213K | 1        |
| U3                                        | Regulator 3.3V SOT-89 AMS1117-3.3     | 1        |
| U4                                        | Flash SOIC-8 W25Q32JVUU               | 1        |
| Y1                                        | Crystal 3225 12MHz                    | 1        |

## 実装の手順

かならずフラックスを用意してください。ブリッジした場合にはフラックスを塗って、はんだごてをあてて余分なフラックスを取り除きましょう。

以下の順序で実装することを推奨しています。

1. RP2350A(U1): RP2040 用の[位置決めボード](https://74th.booth.pm/items/5573498)を使えるなら使いましょう。手はんだ実装時のノウハウは
   https://docs.google.com/document/d/1oHzV6qEClttqfrnbo-PlUElAemhTQe8-u3ijAKLZYF0/edit#heading=h.1b8zdysibsw9 にまとめています。
2. USB Type-C: 受動部品実装前の方が、ランドを用いた疎通チェックがやりやすいため。[実装チェックツール](https://74th.booth.pm/items/5812941)を使うと便利です。
3. DCDC 用インダクタ(L1): 付近に囲むように他の部品があるため、先に実装します。
4. W25Q32VSS(U4): 裏面に流すためのランドがあり、その付近に受動部品があり、後から実装が難しいため。
5. AMS1117-3.3(U3): 近くに CH213 があり、実装しにくいため。
6. CH213(U2)
7. 他の抵抗(R1-11)、キャパシタ(C1-19)、水晶発振器(Y1)、LED(D1)
8. スイッチ(SW1-2): サイズが大きく他の部品の実装の邪魔になるため、後から実装する

確認して実装ミスがなさそうであれば、電気的なチェックに進みましょう。

1. VBUS(VB)、5V、3V3、GND(G)間それぞれの抵抗値を計測し、短絡している（0Ω）となっている事がないことを確認する
2. USB を接続し、5V、3V3 と GND 間の電圧を測り、それぞれの電圧が正常であることを確認する
3. L1 と GND 間の電圧を測り、1.1V が出ていることを確認する。
4. PC に USB が認識されるか確認する。
