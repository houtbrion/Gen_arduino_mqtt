# デジタルスイッチ

1つのデジタル端子を使い，スイッチのON/OFFで端子の電圧が変化することを読み取るものである．


Groveとしてモジュール化されたものも存在する．

- Grove - Button https://wiki.seeedstudio.com/Grove-Button/
- Grove - Switch https://wiki.seeedstudio.com/Grove-Switch-P/

単なるスイッチなので，動作電圧に制限はない．

また，自分で工作するのであれば，スイッチと同じ動作をするものは全てこれで対応できるので，以下のようなものも利用できる．
- ドアセンサースイッチ（リードスイッチ）　ＳＰＳ－３２０ https://akizukidenshi.com/catalog/g/gP-13371/



## 設定項目

![設定画面](../../images/editConfig_DigitalSwitch.png)

## センサID

この設定項目は，利用するスイッチと他のセンサと区別するために番号を割り当てる場合のみ値を変更すれば良い．


## 接続するピン番号

上図の例は，デジタル端子の2番に接続していることを表している．

下の図はArduino MKRシリーズ用のGroveモジュールを接続するための拡張基板であり，上の設定値の場合，接続するのは，「D2」端子となる．

![Alt text](../../images/MKR_carrier.png)
[写真出典](https://store-usa.arduino.cc/products/arduino-mkr-connector-carrier-grove-compatible)


***

- [「仕様定義ファイルの作成」に戻る](../editConfig.md)