object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 374
  ClientWidth = 632
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 176
    Top = 24
    Width = 254
    Height = 33
    Caption = 'Modelos Resueltos'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object StringGrid1: TStringGrid
    Left = 64
    Top = 232
    Width = 481
    Height = 41
    ColCount = 1
    DefaultColWidth = 35
    DefaultRowHeight = 35
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 0
  end
  object MainMenu1: TMainMenu
    Left = 24
    Top = 16
    object Menu1: TMenuItem
      Caption = 'Menu'
      object Menu2: TMenuItem
        Caption = 'Pregunta 1'
        OnClick = Menu2Click
      end
    end
  end
end
