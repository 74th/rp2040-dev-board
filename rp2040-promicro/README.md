# RP2040 Pro Micro ピンアウト開発ボード

発注用ガーバーファイルは [release page](https://github.com/74th/rp2040-dev-board/releases) を確認ください。

<img src="rp-promicro1-v2.0.0.jpg" width="24.5%" /> <img src="rp-promicro2-v2.0.0.jpg" width="24.5%" /> <img src="rp-promicro3-v2.0.0.jpg" width="24.5%" /> <img src="rp-promicro-v2.0.0-pinout.png" width="24.5%" />

- Booth キット販売ページ [https://74th.booth.pm/items/4492441](https://74th.booth.pm/items/4492441)

## v2.0.0 - 2.0.1

- 回路図: [PDF](rp2040-promicro-v2.0.0-semantics.pdf) [kicanvas](https://kicanvas.org/?github=https%3A%2F%2Fgithub.com%2F74th%2Frp2040-dev-board%2Fblob%2Frp2040-promicro%2F2.0.1%2Frp2040-promicro%2Frp2040-promicro.kicad_sch)
- PCB [PDF](rp2040-promicro-v2.0.0-pcb.pdf) [kicanvas](https://kicanvas.org/?github=https%3A%2F%2Fgithub.com%2F74th%2Frp2040-dev-board%2Fblob%2Frp2040-promicro%2F2.0.1%2Frp2040-promicro%2Frp2040-promicro.kicad_pcb)

| Designator                      | Parts                             | Quantity |
| ------------------------------- | --------------------------------- | -------- |
| R1, R2                          | 0805 レジスタ 27.4R               | 2        |
| R3, R7, R8                      | 0805 レジスタ 1kR                 | 3        |
| R4, R5                          | 0805 レジスタ 5.1kR               | 2        |
| R6                              | 0805 レジスタ 10kR                | 1        |
| C1, C2, C6, C7, C8, C9,C10, C13 | 0805 キャパシタ 100nF             | 8        |
| C11, C12                        | 0805 キャパシタ 27pF              | 2        |
| C14, C15                        | 0805 キャパシタ 10uF              | 2        |
| C3, C5                          | 0805 キャパシタ 1uF               | 2        |
| F1                              | リセッタブルフィーズ KT6-1100SMDI | 1        |
| J1                              | USB Type-C ソケット               | 1        |
| J2                              | ピンヘッダー(ProMicro Left)       | 1        |
| J3                              | ピンヘッダー(ProMicro Left)       | 1        |
| SW1                             | SKRPABE010                        | 1        |
| U1                              | MCU RP2040                        | 1        |
| U2                              | FLASH W25Q32JVS                   | 1        |
| U3                              | レギュレータ AMS1117(SOT-89)      | 1        |
| Y1                              | クリスタル 12MHz 3225             | 1        |

## v1.1.0

- 回路図 [rp2040-promicro-v1.1.0-semantics.pdf](rp2040-promicro-v1.1.0-semantics.pdf)
- PCB [rp2040-promicro-v1.1.0-pcb.pdf](rp2040-promicro-v1.1.0-pcb.pdf)

### 部品表

| Item | Qty | Reference(s)                         | Value             | LibPart                            | Footprint                                             | Datasheet                                                                        |
| ---- | --- | ------------------------------------ | ----------------- | ---------------------------------- | ----------------------------------------------------- | -------------------------------------------------------------------------------- |
| 1    | 9   | C1, C2, C4, C6, C7, C8, C9, C10, C13 | 100nF             | Device:C                           | rp2040-dev-board:Capacitor_0805_2012                  | ~                                                                                |
| 2    | 2   | C3, C5                               | 1uF               | Device:C                           | rp2040-dev-board:Capacitor_0805_2012                  | ~                                                                                |
| 3    | 2   | C11, C12                             | 27pF              | Device:C                           | rp2040-dev-board:Capacitor_0603_1608                  | ~                                                                                |
| 4    | 2   | C14, C15                             | 10uF              | Device:C                           | rp2040-dev-board:Capacitor_0805_2012                  | ~                                                                                |
| 5    | 1   | J2                                   | ProMicro-LeftPin  | rp2040-dev-board:ProMicro-LeftPin  | rp2040-dev-board:LeftPin                              |                                                                                  |
| 6    | 1   | J3                                   | ProMicro-RightPin | rp2040-dev-board:ProMicro-RightPin | rp2040-dev-board:RightPin                             |                                                                                  |
| 7    | 1   | P1                                   | USB2.0_C_12pin    | rp2040-dev-board:USB2.0_C_12pin    | rp2040-dev-board:USB-C-12-Pin-MidMount-ali-v2         | https://www.usb.org/sites/default/files/documents/usb_type-c.zip                 |
| 8    | 2   | R1, R2                               | 27.4R             | Device:R                           | rp2040-dev-board:Register_0805_2012                   | ~                                                                                |
| 9    | 2   | R3, R7                               | 1kR               | Device:R                           | rp2040-dev-board:Register_0805_2012                   | ~                                                                                |
| 10   | 2   | R4, R5                               | 5.1kR             | Device:R                           | rp2040-dev-board:Register_0805_2012                   | ~                                                                                |
| 11   | 1   | R6                                   | 10kR              | Device:R                           | rp2040-dev-board:Register_0805_2012                   | ~                                                                                |
| 12   | 1   | SW1                                  | SW_Push           | Switch:SW_Push                     | rp2040-dev-board:BOOT                                 | ~                                                                                |
| 13   | 1   | U1                                   | RP2040            | rp2040-dev-board:RP2040            | rp2040-dev-board:RP2040_hand                          |                                                                                  |
| 14   | 1   | U2                                   | W25Q128JVS        | Memory_Flash:W25Q128JVS            | rp2040-dev-board:W25Q16-128JV-SOIC                    | http://www.winbond.com/resource-files/w25q128jv_dtr%20revc%2003272018%20plus.pdf |
| 15   | 1   | U3                                   | AZ1117-3.3        | Regulator_Linear:AZ1117-3.3        | rp2040-dev-board:Regulator-AMS1117-SOT-223            | https://www.diodes.com/assets/Datasheets/AZ1117.pdf                              |
| 16   | 1   | Y1                                   | Crystal_GND24     | Device:Crystal_GND24               | Crystal:Crystal_SMD_3225-4Pin_3.2x2.5mm_HandSoldering | ~                                                                                |
