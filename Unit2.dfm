object frStartProcess: TfrStartProcess
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1047#1072#1087#1091#1089#1082'..'
  ClientHeight = 132
  ClientWidth = 453
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object exePath: TLabeledEdit
    Left = 24
    Top = 32
    Width = 345
    Height = 21
    EditLabel.Width = 143
    EditLabel.Height = 13
    EditLabel.Caption = #1055#1091#1090#1100' '#1082' '#1080#1089#1087#1086#1083#1085#1103#1077#1084#1086#1084#1091' '#1092#1072#1081#1083#1091
    ReadOnly = True
    TabOrder = 0
  end
  object Button1: TButton
    Left = 375
    Top = 30
    Width = 50
    Height = 25
    Caption = '...'
    TabOrder = 1
    OnClick = Button1Click
  end
  object btnStartProcess: TButton
    Left = 344
    Top = 88
    Width = 81
    Height = 25
    Caption = #1057#1090#1072#1088#1090
    Enabled = False
    TabOrder = 2
    OnClick = btnStartProcessClick
  end
  object FileOpenDialog: TFileOpenDialog
    FavoriteLinks = <>
    FileTypes = <>
    Options = []
    Left = 48
    Top = 72
  end
end
