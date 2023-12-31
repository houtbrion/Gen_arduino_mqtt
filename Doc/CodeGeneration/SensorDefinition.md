# センサの定義


下は``config.yaml``のセンサ関係の定義部分である．
この``config.yaml``の生成に利用した``hardware.yaml``では，センサとして，SHT31とBME280を利用することを宣言していた．
そのため，SHT31とBME280で定義すべき項目だけが，``config.yaml``に生成されている．
```
#
# SHT31
#
sht31:
  use_sht31: true # true(使う) , false(使わない)
  temperature_sensor_id: -1
  humidity_sensor_id: -1


#
# BME280
#
bme280:
  use_bme280: true # true(使う) , false(使わない)
  temperature_sensor_id: -1
  humidity_sensor_id: -1
  pressure_sensor_id: -1
```

個別のセンサに対して設定すべき項目は，センサICの種類やインターフェース(アナログ,デジタル,I2C)によっても
異なるため，個別のセンサについての説明は，以下の各センサの資料を参照すること．

## 接続端子の記述に関する注意事項
センサのうち，アナログ端子もしくはデジタル端子に接続するが，接続した端子の情報を定義ファイルに記述する必要がある．
下の例はDHTシリーズ温湿度計とアナログジャイロの事例であるが，2とはデジタル端子の2番(D2)を表している．

Arduinoのスケッチ(プログラム)では，デジタル端子は数字のみ，アナログ端子は``A0``などのように``A``を付けた文字列として
記入する必要がある．

```
dht_pin: 2
murataENC03_pin: A3
```


## 環境測定系センサ

- [AM232X](sensors/AM232X.md)
- [BME280](sensors/BME280.md)
- [BMP180](sensors/BMP180.md)
- [DHT](sensors/DHT.md)
- [Grove - Temperature Sensor](sensors/Grove_Thermistor.md)
- [SHT2X](sensors/SHT2x.md)
- [SHT31](sensors/SHT31.md)


## 振動・加速度等

- [ADXL335](sensors/ADXL335.md)
- [ADXL345](sensors/ADXL345.md)
- [村田ENC03R](sensors/ENC03R.md)
- [ITG320](sensors/ITG3200.md)
- [MMA7660](sensors/MMA7660.md)


## 接触等

- [Grove - Touch Sensor](sensors/DigitalTouchSensor.md)
- [GROVE - I2C タッチセンサ(MPR121)](sensors/GroveI2cTouch.md)
- [Grove - PIR Motion Sensor](sensors/PIR_Sensor.md)


## 視覚関連

- [TCS34725](sensors/TCS34725.md)
- [TSL2561](sensors/TSL2561.md)


## その他

- [Grove - Switch](sensors/DigitalSwitch.md)
- [Grove - Light Sensor](sensors/Grove_Analog_Light.md)
- [Grove - Sound Sensor](sensors/Grove_Analog_Sound.md)
- [Grove電流センサ](sensors/Grove_Current.md)
- [Grove - GSR Sensor](sensors/Grove_GSR.md)
- [Grove IR Distance Interrupter](sensors/Grove_IR_Distance_Interrupter.md)
- [Grove - Infrared Reflective Sensor](sensors/Grove_IR_Refrective_Sensor.md)
- [Grove水分センサー](sensors/Grove_Moisture.md)
- [Grove - Water Sensor](sensors/Grove_Water.md)
- [Grove - Line Finder](sensors/GroveLineFinder.md)
- [Grove - Rotary Angle Sensor](sensors/Rotary_Angle.md)



***
- [「Arduinoスケッチ(プログラム)の生成」に進む](CodeGeneration.md)
- [「センサ端末の詳細定義」に戻る](TotalDefinition.md)
- [「README」に戻る](../README.md)