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
    Left = 88
    Top = 96
    Width = 481
    Height = 41
    ColCount = 12
    DefaultColWidth = 35
    DefaultRowHeight = 35
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 0
  end
  object StringGrid2: TStringGrid
    Left = 176
    Top = 176
    Width = 313
    Height = 177
    ColCount = 1
    DefaultColWidth = 35
    DefaultRowHeight = 35
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 1
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
      object Pregunta21: TMenuItem
        Caption = 'Pregunta 2'
        OnClick = Pregunta21Click
      end
      object Pregunta31: TMenuItem
        Caption = 'Pregunta 3'
        OnClick = Pregunta31Click
      end
      object Pregunta441: TMenuItem
        Caption = 'Pregunta 4'
        OnClick = Pregunta441Click
      end
      object pREGUNTA51: TMenuItem
        Caption = 'Pregunta 5'
        OnClick = pREGUNTA51Click
      end
      object Pregunta61: TMenuItem
        Caption = 'Pregunta 6'
        OnClick = Pregunta61Click
      end
      object Pregunta71: TMenuItem
        Caption = 'Pregunta 7'
        OnClick = Pregunta71Click
      end
      object Pregunta81: TMenuItem
        Caption = 'Pregunta 8'
        OnClick = Pregunta81Click
      end
    end
  end
end
