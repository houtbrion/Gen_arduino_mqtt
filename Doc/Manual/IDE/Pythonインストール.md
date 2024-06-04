# Pythonのインストールと関連作業

本プロジェクトで，Arduinoにインストールするためのプログラム(Arduinoではスケッチと呼ぶ)を生成する機能はPythonのスクリプトで実現されている．

PythonのインストールはOSによって異なるため，インストール方法は
説明しない．

また，Python用のライブラリの管理も必要になるため，
``pip``もしくは``Anaconda``を同時にインストールしてください．

初めての人には``pip``を勧めます．

windowsの場合は，下のURLからインストール用バイナリをダウンロードできます．

- [https://www.python.org/downloads/windows/](https://www.python.org/downloads/windows/)



## 1. Macの場合の事前作業
Macの場合はPython環境を構築するためには，HomebrewのようなOSS環境を構築するためのツールを導入する必要があります．

以下の手順に従って，環境を構築してください．

- 「https://brew.sh/ja/」に従い，Homebrewをインストール
- 「https://docs.python.org/ja/3/using/mac.html」に従い，Pythonをインストール
- 以下のコマンドで，pipをインストール

```
$ curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py
$ python get-pip.py
```

## 2. Python用ライブラリ

GUI用とyaml用のライブラリとして3つのライブラリをインストールする必要があります．

- PyYaml https://pypi.org/project/PyYAML/
- flet https://pypi.org/project/flet/

``pip``を利用している人は，各ライブラリのURLを見てインストールしてください．



***

- [「Arduinoのプログラム(スケッチ)のインストール」に戻る](スケッチのコンパイルとインストール.md)
- [マニュアルトップに戻る](../Manual.md)

