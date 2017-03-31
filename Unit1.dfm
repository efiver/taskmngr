object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1055#1088#1086#1090#1086#1090#1080#1087' '#1076#1080#1089#1087#1077#1090#1095#1077#1088#1072' '#1079#1072#1076#1072#1095
  ClientHeight = 542
  ClientWidth = 728
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 101
    Top = 21
    Width = 163
    Height = 16
    Caption = #1086#1073#1085#1086#1074#1083#1077#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1082#1072#1078#1076#1099#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 305
    Top = 21
    Width = 23
    Height = 16
    Caption = #1089#1077#1082'.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 0
    Top = 513
    Width = 728
    Height = 29
    Align = alBottom
    BevelOuter = bvLowered
    ShowCaption = False
    TabOrder = 0
    object lbState: TLabel
      Left = 16
      Top = 7
      Width = 34
      Height = 13
      Caption = 'lbState'
    end
  end
  object StringGridPrcs: TStringGrid
    Left = 0
    Top = 64
    Width = 728
    Height = 449
    Align = alBottom
    DefaultColWidth = 140
    DrawingStyle = gdsGradient
    FixedColor = clMenuBar
    FixedCols = 0
    RowCount = 2
    PopupMenu = pmPrcList
    ScrollBars = ssVertical
    TabOrder = 1
    OnMouseDown = StringGridPrcsMouseDown
    ColWidths = (
      140
      140
      140
      140
      140)
    RowHeights = (
      24
      24)
  end
  object edUpdTime: TEdit
    Left = 270
    Top = 21
    Width = 16
    Height = 25
    BevelInner = bvNone
    BevelOuter = bvNone
    BorderStyle = bsNone
    Color = clBtnFace
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsUnderline]
    ParentFont = False
    TabOrder = 2
    Text = '1'
  end
  object UpDown1: TUpDown
    Left = 286
    Top = 21
    Width = 15
    Height = 25
    Associate = edUpdTime
    Min = 1
    Position = 1
    TabOrder = 3
    OnChanging = UpDown1Changing
  end
  object tsEnableTimer: TToggleSwitch
    Left = 14
    Top = 19
    Width = 85
    Height = 20
    DisabledColor = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    FrameColor = clWindowFrame
    ParentFont = False
    StateCaptions.CaptionOn = #1042#1082#1083
    StateCaptions.CaptionOff = #1042#1099#1082#1083
    TabOrder = 4
    ThumbColor = clNavy
    OnClick = tsEnableTimerClick
  end
  object Button1: TButton
    Left = 376
    Top = 18
    Width = 137
    Height = 25
    Caption = #1054#1073#1085#1086#1074#1080#1090#1100' '#1089#1077#1081#1095#1072#1089
    TabOrder = 5
    OnClick = Button1Click
  end
  object pmPrcList: TPopupMenu
    Left = 80
    Top = 264
    object N9: TMenuItem
      Caption = #1047#1072#1074#1077#1088#1096#1080#1090#1100' '#1087#1088#1086#1094#1077#1089#1089
      OnClick = N9Click
    end
    object N7: TMenuItem
      Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1087#1088#1086#1094#1077#1089#1089#1077
      OnClick = N7Click
    end
  end
  object OpenDialog: TOpenDialog
    Filter = 'Executable files|*.exe|Dynamic-link libraries|*.dll'
    Left = 536
    Top = 136
  end
  object MainMenu: TMainMenu
    Left = 184
    Top = 352
    object sdfg1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N1: TMenuItem
        Caption = #1047#1072#1087#1091#1089#1082' '#1085#1086#1074#1086#1075#1086' '#1087#1088#1086#1094#1077#1089#1089#1072
        OnClick = N1Click
      end
      object N2: TMenuItem
        Caption = #1042#1099#1093#1086#1076' '#1080#1079' '#1087#1088#1086#1075#1088#1072#1084#1084#1099
        OnClick = N2Click
      end
    end
    object N3: TMenuItem
      Caption = #1055#1088#1086#1094#1077#1089#1089
      object N4: TMenuItem
        Caption = #1054#1089#1090#1072#1085#1086#1074#1080#1090#1100
      end
      object N5: TMenuItem
        Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103
      end
    end
    object N6: TMenuItem
      Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
      OnClick = N6Click
    end
  end
  object timerupdPrcList: TTimer
    Enabled = False
    OnTimer = timerupdPrcListTimer
    Left = 352
    Top = 168
  end
end
