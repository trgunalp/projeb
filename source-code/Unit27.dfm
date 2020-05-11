object Karayar: TKarayar
  Left = 293
  Top = 341
  BorderStyle = bsToolWindow
  Caption = 'Ayarlar'
  ClientHeight = 284
  ClientWidth = 178
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 162
    Height = 14
    Caption = 'Yarma veya Dolgu de'#287'eri:'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 64
    Width = 89
    Height = 14
    Caption = 'Kesit No (km):'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 192
    Width = 71
    Height = 14
    Caption = 'S'#305'kl'#305'k Ayar'#305':'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 8
    Top = 32
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = '0'
  end
  object Edit2: TEdit
    Left = 8
    Top = 88
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = '0'
  end
  object Button1: TButton
    Left = 48
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Ekle'
    TabOrder = 3
    OnClick = Button1Click
  end
  object ColorBox1: TColorBox
    Left = 8
    Top = 120
    Width = 145
    Height = 22
    Selected = clGreen
    ItemHeight = 16
    TabOrder = 2
  end
  object Edit3: TEdit
    Left = 8
    Top = 216
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MaxLength = 4
    ParentFont = False
    TabOrder = 4
    Text = '20'
  end
  object Button2: TButton
    Left = 48
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Ayarla'
    TabOrder = 5
    OnClick = Button2Click
  end
end
