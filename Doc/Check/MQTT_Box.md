# 動作確認(MQTTアプリケーション編)
下の図はユーザが開発するセンサ端末の動作テストに利用する環境を示している．
ユーザが動作確認に用いるのは開発用PCとなる．

![テスト環境](../images/Test_Environment.png)


## テスト用アプリケーションのインストール

テストに用いるアプリケーションは，「MQTT Box」というMQTTクライアントアプリケーションである．
まず，最初にMQTT Boxをインストールする．
MQTT BoxはMac, Windows, Linux, Chrome OSの全てで動作するアプリケーションで，下図は
マイクロソフトストアのMQTT Boxの画面である．

![MQTT_Box マイクロソフトストア](../images/MQTT_box_マイクロソフトストア.png)


## MQTT Boxの設定
下の図はMQTT Box起動時の初期画面である．最初に，「Create MQTT Client」ボタンを押す．

![MQTT_box_初期画面](../images/MQTT_box_初期画面.png)

- ➀ 適当な名前を入力
- ➁ 「mqtt/tcp」を選択
- ➂,➃ MQTTの認証を行う場合は，認められているユーザ名とパスワードを入力
- ➄ mosquittoが動作するIoTゲートウェイのIPアドレスを入力
- ➅ 「Save」ボタンを押す

IoTゲートウェイのIPアドレスや認証のユーザ名(とパスワード)は管理者に確認すること．

![MQTT_box_設定](../images/MQTT_box_setting.png)

MQTT Boxのクライアント画面の右側(subscribe欄)に，Arduino設定で定義した「トピック」の文字列を入力し，「Subscribe」ボタンを押す．
![MQTT_box_監視画面](../images/MQTT_box_監視画面.png)

## MQTT Boxによる動作確認
下の図は，温湿度・気圧センサであるBME280を搭載したArduinoをテスト環境のネットワークに接続した場合の画面である．
この図にあるように，一番上に気圧，次に，気温，最後に温度が出力されているのが読み取れる．
![MQTT_box_実行例](../images/MQTT_box_実行例.png)

先程の温度,湿度,気圧の出力文字列と下図のような，Arduino IDEのシリアル監視画面に出力されている内容が一致していることを確認する．

![センサ端末実行例_IDE](../images/センサ端末実行例_IDE.png)



***


- [「README」に戻る](../README.md)
