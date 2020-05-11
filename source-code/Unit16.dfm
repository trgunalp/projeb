object NewBMPForm: TNewBMPForm
  Left = 342
  Top = 298
  BorderStyle = bsDialog
  Caption = 'Yeni '#199'al'#305#351'ma Alan'#305
  ClientHeight = 136
  ClientWidth = 192
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
    Left = 16
    Top = 24
    Width = 53
    Height = 14
    Caption = 'Geni'#351'lik:'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 0
    Width = 57
    Height = 16
    Caption = 'B'#252'y'#252'kl'#252'k'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clGray
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 16
    Top = 64
    Width = 55
    Height = 14
    Caption = 'Uzunluk:'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 144
    Top = 24
    Width = 36
    Height = 16
    Caption = 'Piksel'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clGray
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 144
    Top = 64
    Width = 36
    Height = 16
    Caption = 'Piksel'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clGray
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object WidthEdit: TEdit
    Left = 96
    Top = 24
    Width = 40
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MaxLength = 4
    ParentFont = False
    TabOrder = 0
  end
  object HeightEdit: TEdit
    Left = 96
    Top = 64
    Width = 40
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MaxLength = 4
    ParentFont = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 8
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Olu'#351'tur'
    ModalResult = 1
    TabOrder = 2
  end
  object Button2: TButton
    Left = 104
    Top = 104
    Width = 75
    Height = 25
    Caption = #304'ptal'
    ModalResult = 2
    TabOrder = 3
  end
end
