object frPrcInfo: TfrPrcInfo
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1055#1088#1086#1094#1077#1089#1089
  ClientHeight = 304
  ClientWidth = 628
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 16
    Width = 305
    Height = 105
    Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1087#1088#1086#1094#1077#1089#1089#1077
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentColor = False
    ParentFont = False
    TabOrder = 0
    object lbPrcPath: TLabel
      Left = 16
      Top = 32
      Width = 70
      Height = 14
      Caption = 'notepad.exe'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Button1: TButton
      Left = 16
      Top = 52
      Width = 145
      Height = 25
      Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1074' '#1087#1088#1086#1074#1086#1076#1085#1080#1082#1077
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 141
    Width = 601
    Height = 145
    Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentColor = False
    ParentFont = False
    TabOrder = 1
    object CheckBox1: TCheckBox
      Left = 16
      Top = 112
      Width = 353
      Height = 17
      Caption = #1040#1074#1090#1086#1084#1072#1090#1080#1095#1077#1089#1082#1080' '#1079#1072#1074#1077#1088#1096#1072#1090#1100' '#1087#1088#1086#1094#1077#1089#1089' '#1087#1088#1080' '#1086#1073#1085#1072#1088#1091#1078#1077#1085#1080#1080
      TabOrder = 0
    end
    object LabeledEdit1: TLabeledEdit
      Left = 16
      Top = 48
      Width = 401
      Height = 24
      EditLabel.Width = 253
      EditLabel.Height = 16
      EditLabel.Caption = #1061#1101#1096'-'#1089#1091#1084#1084#1072' '#1080#1089#1087#1086#1083#1085#1103#1077#1084#1086#1075#1086' '#1092#1072#1081#1083#1072' ('#1057#1090#1088#1080#1073#1086#1075')'
      TabOrder = 1
    end
    object Button2: TButton
      Left = 423
      Top = 48
      Width = 90
      Height = 25
      Caption = #1050#1086#1087#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 2
    end
    object Button3: TButton
      Left = 16
      Top = 81
      Width = 153
      Height = 25
      Caption = #1047#1072#1074#1077#1088#1096#1080#1090#1100' '#1087#1088#1086#1094#1077#1089#1089
      TabOrder = 3
      OnClick = Button3Click
    end
  end
  object GroupBox3: TGroupBox
    Left = 327
    Top = 16
    Width = 282
    Height = 105
    Caption = #1042#1088#1077#1084#1103' '#1074#1099#1087#1086#1083#1085#1077#1085#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    object Label1: TLabel
      Left = 14
      Top = 33
      Width = 115
      Height = 13
      Caption = #1044#1072#1090#1072' '#1080' '#1074#1088#1077#1084#1103' '#1079#1072#1087#1091#1089#1082#1072':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object lbTimeStart: TLabel
      Left = 134
      Top = 33
      Width = 15
      Height = 13
      Caption = '---'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 14
      Top = 57
      Width = 111
      Height = 13
      Caption = #1042#1088#1077#1084#1103' '#1087#1088#1080#1086#1089#1090#1072#1085#1086#1074#1082#1080': '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object lbExitTime: TLabel
      Left = 127
      Top = 57
      Width = 15
      Height = 13
      Caption = '---'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
end
