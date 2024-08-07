[Variables]
; If you need to change the disk in the "Disk Space" portion, change this.
DiskLocation=D
@Include=#@#\Settings\Media Player\Player.inc

; ===============

[MeasureScreenTime]
Measure=Uptime
AddDaysToHours=1
UpdateDivider=#SystemInfoUpdate#

[ScreenHours]
Measure=Calc
Formula=MeasureScreenTime/3600

[MeasureBackground]
Measure=Calc
Formula=0
ifCondition= (ScreenHours >= 0) && (ScreenHours <= 9)
ifTrueAction =[!SetOption MeasureBackground Formula 0]
ifCondition2 = (ScreenHours >= 10) && (ScreenHours <= 99)
ifTrueAction2 = [!SetOption MeasureBackground Formula 10]
ifCondition3 = (ScreenHours >= 100) && (ScreenHours <= 249)
ifTrueAction3 = [!SetOption MeasureBackground Formula 100][!WriteKeyValue MeasureBackground ifTrueAction "[!SetOption MeasureBackground Formula 1]" "#@#\Settings\Ame\Task Manager.inc"]
ifCondition4 = (ScreenHours >= 250) && (ScreenHours <= 499)
ifTrueAction4 = [!SetOption MeasureBackground Formula 250][!WriteKeyValue MeasureBackground ifTrueAction "[!SetOption MeasureBackground Formula 1]" "#@#\Settings\Ame\Task Manager.inc"]
ifCondition5 = (ScreenHours >= 500) && (ScreenHours <= 999)
ifTrueAction5 = [!SetOption MeasureBackground Formula 500][Play "#@#\Audio\event_happy.wav"][!WriteKeyValue MeasureBackground ifTrueAction "[!SetOption MeasureBackground Formula 1]" "#@#\Settings\Ame\Task Manager.inc"]
ifCondition6 = (ScreenHours > 999)
ifTrueAction6 = [!SetOption MeasureBackground Formula 1000][Play "#@#\Audio\event_happy.wav"][!WriteKeyValue MeasureBackground ifTrueAction "[!SetOption MeasureBackground Formula 2]" "#@#\Settings\Ame\Task Manager.inc"]

; ===============

[MeasureCPU]
Measure=CPU
ifAboveValue = 59.5
ifAboveAction = [!SetOption Stress Formula 1]
ifBelowValue = 59.4999
ifBelowAction = [!SetOption Stress Formula 0]
UpdateDivider=#SystemInfoUpdate#

[Stress]
Measure=Calc
Formula=0
IfCondition=(Stress = 1) && (MeasureCPU >= 80)
IfTrueAction=[!EnableMeasure Stressed]
IfFalseAction=[!DisableMeasure Stressed][!SetVariable SpritePath "#@#Images\Ame\sprites\[*Stress*]\[*Affection*]\[*Darkness*]\[*Variation*]"]

; ===============

[MeasureMemory]
Measure=PhysicalMemory
UpdateDivider=#SystemInfoUpdate#

[MeasureMemoryTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=#SystemInfoUpdate#

[MeasureMemoryPercentage]
Measure=Calc
Formula=(MeasureMemory/MeasureMemoryTotal)*100
UpdateDivider=#SystemInfoUpdate#

[Affection]
Measure=Calc
Formula=0
DynamicVariables=1
ifCondition = (MeasureMemoryPercentage > 0) && (MeasureMemoryPercentage <= 59)
ifTrueAction = [!SetOption Affection Formula 0]
ifCondition2 = (MeasureMemoryPercentage >= 60) && (MeasureMemoryPercentage <= 79)
ifTrueAction2 = [!SetOption Affection Formula 1]
ifCondition3 = (MeasureMemoryPercentage >= 80)
ifTrueAction3 = [!SetOption Affection Formula 2]

; ===============

[MeasureDisk]
Measure=FreeDiskSpace
Drive=#DiskLocation#:
UpdateDivider=#SystemInfoUpdate#

[MeasureDiskTotal]
Measure=FreeDiskSpace
Drive=#DiskLocation#:
Total=1
UpdateDivider=#SystemInfoUpdate#

[MeasureDiskPercentage]
Measure=Calc
Formula=100-((MeasureDisk/MeasureDiskTotal)*100)
UpdateDivider=#SystemInfoUpdate#

[Darkness]
Measure=Calc
Formula=0
DynamicVariables=1
ifCondition = (MeasureDiskPercentage > 0) && (MeasureDiskPercentage <= 59)
ifTrueAction = [!SetOption Darkness Formula 0]
ifCondition2 = (MeasureDiskPercentage >= 60) && (MeasureDiskPercentage <= 79)
ifTrueAction2 = [!SetOption Darkness Formula 1]
ifCondition3 = (MeasureDiskPercentage >= 80)
ifTrueAction3 = [!SetOption Darkness Formula 2]

; =======

[MeasureState]
PlayerType=STATE
IfCondition = MeasureState = 1
IfTrueAction = [!SetVariable SpritePath  "#@#Images\Ame\sprites\-1\-1\-1\0"][!HideMeter HeadpatHitbox]
IfFalseAction = [!SetVariable SpritePath  "#@#Images\Ame\sprites\[*Stress*]\[*Affection*]\[*Darkness*]\[*Variation*]"][!ShowMeter HeadpatHitbox]

; =======

[Stressed]
Measure=Calc
Formula=Random
LowBound=1
HighBound=100
UpdateRandom=1
UpdateDivider=100
DynamicVariables=1
Disabled=1

IfCondition=(Stressed >= 90)
IfTrueAction=[!SetVariable SpritePath "#@#Images\Ame\sprites\1\-1\-1\0"][!HideMeter HeadpatHitbox]
IfFalseAction=[!SetVariable SpritePath "#@#Images\Ame\sprites\[*Stress*]\[*Affection*]\[*Darkness*]\[*Variation*]"][!ShowMeter HeadpatHitbox]
IfCondition2=(Stressed >= 75) && (Stressed < 90)
IfTrueAction2=[!SetVariable SpritePath "#@#Images\Ame\sprites\1\-1\-1\1"][!HideMeter HeadpatHitbox]
IfFalseAction2=[!SetVariable SpritePath "#@#Images\Ame\sprites\[*Stress*]\[*Affection*]\[*Darkness*]\[*Variation*]"][!ShowMeter HeadpatHitbox]

; =======

