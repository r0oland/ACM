Imports System.IO
Imports System.IO.Ports
Imports System.Threading

Public Class Form1
    Private Sub Button2_Click_1(sender As System.Object, e As System.EventArgs) Handles Button2.Click
        Timer1.Start()
    End Sub

    Private Sub Form1_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        SerialPort1.Close()
        SerialPort1.PortName = ComboBox1.SelectedItem
        SerialPort1.PortName = ComboBox1.SelectedItem
        SerialPort1.BaudRate = 9600
        SerialPort1.DataBits = 8
        SerialPort1.Parity = Parity.None
        SerialPort1.StopBits = StopBits.One
        SerialPort1.Handshake = Handshake.None
        SerialPort1.Encoding = System.Text.Encoding.Default
    End Sub

    Private Sub Button1_Click(sender As System.Object, e As System.EventArgs) Handles Button1.Click
        SerialPort1.Open()
        SerialPort1.Write(TextBox1.Text)
        SerialPort1.Close()
    End Sub

    Private Sub Button2_Click(sender As System.Object, e As System.EventArgs)
        SerialPort1.Open()
        SerialPort1.Write("~")
        SerialPort1.Close()
    End Sub

    Private Sub Timer1_Tick(sender As System.Object, e As System.EventArgs) Handles Timer1.Tick
        Dim waarderam As String = String.Format(System.Math.Round(My.Computer.Info.AvailablePhysicalMemory / (1024 * 1024)), 2).ToString
        Dim waardecpu As String = PerformanceCounter1.NextValue
        ' ` First line
        ' * Second line
        SerialPort1.Open()
        SerialPort1.Write("~")
        SerialPort1.Write("RAM:" & waarderam & "MB" & " free" & "`" & "CPU:" & Math.Truncate(waardecpu * 100) / 100 & "%" & "*")
        SerialPort1.Close()
    End Sub

    Private Sub Button3_Click(sender As System.Object, e As System.EventArgs) Handles Button3.Click
        Timer1.Stop()
        SerialPort1.Open()
        SerialPort1.Write("~")
        SerialPort1.Write("Monitoring" & "`" & "stopped!")
        Timer2.Start()
        SerialPort1.Close()
    End Sub


    Private Sub TextBox1_TextChanged(sender As System.Object, e As System.EventArgs) Handles TextBox1.TextChanged
        If TextBox1.Text.Length >= 16 Then
            MessageBox.Show("This line is full!")
        End If
    End Sub

    Private Sub Timer2_Tick(sender As System.Object, e As System.EventArgs) Handles Timer2.Tick
        SerialPort1.Open()
        SerialPort1.Write("~")
        SerialPort1.Close()
        Timer2.Stop()
    End Sub

    Private Sub Button7_Click(sender As System.Object, e As System.EventArgs) Handles Button7.Click
        SerialPort1.Open()
        SerialPort1.Write("~")
        SerialPort1.Write("LCD is working!")
        Timer2.Start()
        SerialPort1.Close()
    End Sub



    Private Sub Button5_Click(sender As System.Object, e As System.EventArgs) Handles Button5.Click
        SerialPort1.Open()
        SerialPort1.Write("*")
        SerialPort1.Close()
    End Sub

    Private Sub Button6_Click(sender As System.Object, e As System.EventArgs) Handles Button6.Click
        SerialPort1.Open()
        SerialPort1.Write("`")
        SerialPort1.Close()
    End Sub

    Private Sub Button4_Click(sender As System.Object, e As System.EventArgs) Handles Button4.Click
        SerialPort1.Open()
        SerialPort1.Write("~")
        SerialPort1.Close()
    End Sub
End Class
