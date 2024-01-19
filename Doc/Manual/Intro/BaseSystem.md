# 利用するマイコン
本開発環境では，センサ端末開発者は，
センサを接続するだけでセンサ系のIoT端末のハードウェアとして動作する物が管理者から配布される環境を想定している．
また，本開発環境で推奨しているハードウェアは以下うちの何れかであるため，管理者が居る環境の場合，
以下のうちの何れか，もしくは，それをカスタマイズしたものになるはずである．

- MKR Zero + MKR Ethernetシールド
- MKR WiFi1010 + マイクロSDシールド
- Uno R4 Minima + Ethernetシールド
- Uno R4 WiFi + マイクロSDシールド
- Nano 33 IoT

管理者は，端末開発者に以下に紹介するハードウェアのうちいずれか(もしくは複数)を作成し，配布する
用意をする．ただし，作成といっても，下記のハードウェアを入手できれば，コネクタを差し込むだけで済むため，電子工作の
技量は必要ない．

## MKR Zero + MKR Ethernetシールド
これは，MKRファミリのZeroにイーサネットシールドを追加したものに，センサ以外の最小限の周辺回路を取り付けたものである．
![MKR_ZERO+LED+RTC](../images/MKR_ZERO+LED+RTC.jpg)

### 構成部品
- Arduino MKR ZERO
![Arduino MKR ZERO](../images/MKR_Zero.png)
https://store-usa.arduino.cc/products/arduino-mkr-zero-i2s-bus-sd-for-sound-music-digital-audio-data

- Arduino MKR ETH Shield
![Arduino MKR ETH Shield](../images/MKR_Ethernet.png)
https://store-usa.arduino.cc/products/arduino-mkr-eth-shield

- Arduino MKR Connector Carrier
![Arduino MKR Connector Carrier](../images/MKR_Grove_Shield.png)
https://store-usa.arduino.cc/products/arduino-mkr-connector-carrier-grove-compatible

- Grove – Chainable RGB LED
![Grove – Chainable RGB LED](../images/Grove_Chainable_RGB_LED.jpg)
https://www.seeedstudio.com/Grove-Chainable-RGB-Led-V2-0.html

- Adafruit DS3231 Precision RTC Breakout (RTCは各種都合により変更される可能性あり)
![Adafruit DS3231](../images/Adafruit_DS3231.jpg)
https://www.adafruit.com/product/3013

- Grove - I2C Hub
![Grove - I2C Hub](../images/Grove_I2C_Hub.jpg)
https://www.seeedstudio.com/Grove-I2C-Hub.html

### イーサネットシールドのMACアドレス

PCやWiFi基地局，ルータ等はMACアドレスは機器に内蔵されたROMに記入されており，
プログラム上で記述する必要はないが，ArduinoはMACアドレスを持たないため，別途指定する必要がある．

Arduinoのイーサネットシールドのうち，Classicシリーズのシールドには，Arduinoの製造元が取得したMACアドレスが
記載されたシールが貼られているため，そのアドレスを利用すれば良い．一方，MKRのイーサネットシールドには
MACアドレスのシールがないため，自分でMACアドレスを決めて，そのアドレスをプログラム(Arduinoの場合はスケッチ)に記入する必要がある．

センサ端末の開発者は，配布された装置のどこかに，アドレスが記入されたシールが貼られているはずであるので，それを探してメモしておく．
メモしたアドレスはプログラム作成の際に，設定ファイルに記入する．

管理者は，classicシリーズ以外のイーサネットシールドには，個別にMACアドレスを取得し，
シールを貼る必要がある．

![MACアドレスシールMKR](../images/MACアドレスシールMKR.jpg)


### 使用済みのGroveコネクタ

センサ等を後に追加する場合に，I2C以外は既に使われている場所は利用できない．
このハードウェアウェア構成の場合，LED, RTC, SDにより
Groveのコネクタのうち，D4,D5,D6とI2Cは既に使われている．

![MKR_Zero_Grove_コネクタ](../images/MKR_Zero_Grove_コネクタ.png)

I2Cに関しては，シールドのI2Cコネクタ(TWIコネクタ)に
接続できないものの，[Grove - I2C Hub](https://www.seeedstudio.com/Grove-I2C-Hub.html)のコネクタに接続することで，
利用可能であるため，問題にはならない．


## MKR WiFi1010 + マイクロSDシールド
これは，MKRファミリのWiFi1010をベースにしたものである．
![MKR_WiFi1010+LED+RTC](../images/MKR_WiFi1010+LED+RTC.jpg)

### 構成部品
- Arduino MKR WiFi 1010
![Arduino MKR WiFi 1010](../images/MKR_WiFi1010.png)
https://store-usa.arduino.cc/products/arduino-mkr-wifi-1010

- Arduino MKR Connector Carrier
![Arduino MKR Connector Carrier](../images/MKR_Grove_Shield.png)
https://store-usa.arduino.cc/products/arduino-mkr-connector-carrier-grove-compatible

- MKR SD Proto Shield
![MKR SD Proto Shield](../images/MKR_SD.png)
https://store-usa.arduino.cc/products/mkr-sd-proto-shield

- Grove – Chainable RGB LED
![Grove – Chainable RGB LED](../images/Grove_Chainable_RGB_LED.jpg)
https://www.seeedstudio.com/Grove-Chainable-RGB-Led-V2-0.html

- Adafruit DS3231 Precision RTC Breakout (RTCは各種都合により変更される可能性あり)
![Adafruit DS3231](../images/Adafruit_DS3231.jpg)
https://www.adafruit.com/product/3013

- Grove - I2C Hub
![Grove - I2C Hub](../images/Grove_I2C_Hub.jpg)
https://www.seeedstudio.com/Grove-I2C-Hub.html


### 使用済みのGroveコネクタ

センサ等を後に追加する場合に，I2C以外は既に使われている端子は利用できない．

I2Cで接続するセンサは[Grove - I2C Hub](https://www.seeedstudio.com/Grove-I2C-Hub.html)のコネクタに接続すれば良い．

このシステムでは，デジタル端子の4(D4)は，マイクロSDシールドのチップセレクト，D5,D6はLEDで利用されているため，
センサやその他の周辺回路を接続することができない．

![MKR_WiFi1010_Grove_コネクタ](../images/MKR_WiFi1010_Grove_コネクタ.png)

## Uno R4 Minima + Ethernetシールド
![Uno R4 Base system](../images/UNO+Shield+RTC+LED.jpg)

### 構成部品
- Arduino® UNO R4 Minima
![Arduino® UNO R4 Minima](../images/Uno_R4.png)
https://store-usa.arduino.cc/products/uno-r4-minima


- Arduino Ethernet Shield 2
![Arduino Ethernet Shield 2](../images/Classic_Ethernet.png)
https://store-usa.arduino.cc/products/arduino-ethernet-shield-2

- Arduino用 Groveベースシールド
![Arduino用 Groveベースシールド](../images/Groveシールド.jpg)
https://jp.seeedstudio.com/Base-Shield-V2.html

- Grove – Chainable RGB LED
![Grove – Chainable RGB LED](../images/Grove_Chainable_RGB_LED.jpg)
https://www.seeedstudio.com/Grove-Chainable-RGB-Led-V2-0.html

- Adafruit DS3231 Precision RTC Breakout (RTCは各種都合により変更される可能性あり)
![Adafruit DS3231](../images/Adafruit_DS3231.jpg)
https://www.adafruit.com/product/3013


### イーサネットシールドのMACアドレス
Classicシリーズ用のイーサネットシールドには，MACアドレスを記載したシールが貼られているはずである．
そのため，この数字(16進数6個組)をメモしておく．

このアドレスはプログラムを生成する際に，定義ファイルに書き込む．

![MACアドレスClassic](../images/MACアドレスClassic.jpg)


### 使用済みのGroveコネクタ

センサ等を後に追加する場合に，I2C以外は既に使われている端子は利用できない．

デジタル端子の4と10(D4とD10)はそれぞれ，マイクロSDとイーサネット回路のチップセレクトとして利用されるため，
センサやその他の周辺回路を接続することができない．また．
I2Cコネクタ4つのうちの1つとLEDで6番7番端子を使っているため，下図のバツ印のところは利用不可である．

![Minima_Grove_コネクタ](../images/Minima_Grove_コネクタ.png)



## Uno R4 WiFi + マイクロSDシールド

### 構成部品
- Arduino® UNO R4 WiFi
![Arduino® UNO R4 WiFi](../images/Uno_R4_WiFi.png)
https://store-usa.arduino.cc/products/uno-r4-wifi


- Arduino用 Groveベースシールド
![Arduino用 Groveベースシールド](../images/Groveシールド.jpg)
https://jp.seeedstudio.com/Base-Shield-V2.html


- SDカード用シールド : 以下のうちのいずれか
    - SD Card Shield
    https://www.seeedstudio.com/SD-Card-Shield-V4-p-1381.html

    - SparkFun microSD Shield
    https://www.sparkfun.com/products/12761


- Grove – Chainable RGB LED
![Grove – Chainable RGB LED](../images/Grove_Chainable_RGB_LED.jpg)
https://www.seeedstudio.com/Grove-Chainable-RGB-Led-V2-0.html

- Adafruit DS3231 Precision RTC Breakout (RTCは各種都合により変更される可能性あり)
![Adafruit DS3231](../images/Adafruit_DS3231.jpg)
https://www.adafruit.com/product/3013


### 使用済みのGroveコネクタ

センサ等を後に追加する場合に，I2C以外は既に使われている端子は利用できない．

デジタル端子の4(D4)はマイクロSDのチップセレクトとして利用されるため，
センサやその他の周辺回路を接続することができない．また．
I2Cコネクタ4つのうちの1つとLEDで6番7番端子を使っているため，下図のバツ印のところは利用不可である．

![Minima_Grove_コネクタ](../images/Minima_Grove_コネクタ.png)



## Arduino Nano 33 IoT

![Nano33_IoT+周辺機器](../images/Nano33_IoT+SD+LED+RTC.png)
### 構成部品

Arduino Nano 33 IoT
![Nano_33_IoT](../images/Nano_33_IoT.png)
https://store-usa.arduino.cc/products/arduino-nano-33-iot

Grove Shield for Arduino Nano
![Grove_nano_shield](../images/Grove_nano_shield.jpg)
https://www.seeedstudio.com/Grove-Shield-for-Arduino-Nano-p-4112.html

マイクロSDモジュール
![マイクロSDモジュール](../images/マイクロSDモジュール.jpg)
https://www.adafruit.com/product/254


- Grove – Chainable RGB LED
![Grove – Chainable RGB LED](../images/Grove_Chainable_RGB_LED.jpg)
https://www.seeedstudio.com/Grove-Chainable-RGB-Led-V2-0.html

- Adafruit DS3231 Precision RTC Breakout (RTCは各種都合により変更される可能性あり)
![Adafruit DS3231](../images/Adafruit_DS3231.jpg)
https://www.adafruit.com/product/3013


- Grove - I2C Hub
![Grove - I2C Hub](../images/Grove_I2C_Hub.jpg)
https://www.seeedstudio.com/Grove-I2C-Hub.html



### 使用済みのGroveコネクタ

センサ等を後に追加する場合に，I2C以外は既に使われている場所は利用できない．

I2CコネクタとLEDで6番7番端子を使っている．また，SPIで4つのピンを使っているが，対応するGroveコネクタが存在しないため，SPIは気にしなくて良い．

以上から，Groveシールドのうち，下図のバツ印のところは利用不可である．

![Nano_Grove_コネクタ](../images/Nano_Grove_コネクタ.png)

<!-- コメントアウトしたい内容 -->
<!-- 

## Arduino Nano ESP32

### 準備するもの

Arduino Nano ESP32
![Arduino_Nano_ESP32](../images/Arduino_Nano_ESP32.png)

https://store-usa.arduino.cc/products/nano-esp32


Grove Shield for Arduino Nano
![Grove_nano_shield](../images/Grove_nano_shield.jpg)
https://www.seeedstudio.com/Grove-Shield-for-Arduino-Nano-p-4112.html


- Grove – Chainable RGB LED
![Grove – Chainable RGB LED](../images/Grove_Chainable_RGB_LED.jpg)
https://www.seeedstudio.com/Grove-Chainable-RGB-Led-V2-0.html

- Adafruit DS3231 Precision RTC Breakout (RTCは各種都合により変更される可能性あり)
![Adafruit DS3231](../images/Adafruit_DS3231.jpg)
https://www.adafruit.com/product/3013


- Grove - I2C Hub
![Grove - I2C Hub](../images/Grove_I2C_Hub.jpg)
https://www.seeedstudio.com/Grove-I2C-Hub.html

-->

***

- [「マイコンインターフェース解説」に戻る](Arduino_IF.md)
- [マニュアルトップに戻る](../Manual.md)