[Rainmeter]
Update=-1

[Background]
Meter=IMAGE
ImageName=#@#Images\Ame\385
AntiAlias=1

[WindowTitles]
Meter=STRING
Text="お知らせ"
FontFace=DinkieBitmap 7px
X=34
Y=14
FontSize=12
FontColor=77,35,207

[Close]
Meter=IMAGE
X=(#Width# - 16)
Y=11
ImageName=#@#Images\button_close.png
LeftMouseUpAction=[Play "#@#Audio\endHaishin.wav"][!Redraw][!RainmeterDeactivateConfig]

[DarkenBG]
Meter=SHAPE
Shape=Rectangle 8,42,385,251 | Extend FillColor | StrokeWidth 0
FillColor=FillColor 0,0,0,255

[WarningExplanation]
Meter=String
X=200
Y=65
Text=スプライトアニメーションの影響で、ローエンドPCではCPU使用率が高くなる可能性があります。#CRLF##CRLF#使用率が気になる場合、いつでも自由に閉じることができます。
clipString = 2
W=360
StringAlign=Center
FontFace=PixelMplus10
FontSize=14
FontColor=228,114,114
AntiAlias=0

[ButtonChromeOpera]
Meter=Image
ImageName=#@#Images\Ame\button.png
X=103
Y=230
LeftMouseUpAction=[!WriteKeyValue Variables @Include2 Scene\Ame.inc][Play "#@#Audio\execute.wav"][!RefreshApp]

[StartAme]
Meter=String
X=202
Y=239
Text=あめちゃんに会う
clipString = 2
W=360
StringAlign=Center
FontFace=PixelMplus10
FontSize=14
FontColor=77,35,207
AntiAlias=0