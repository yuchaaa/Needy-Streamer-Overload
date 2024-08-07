[Variables]
; If you need to change the disk in the "Disk Space" portion, change this.
DiskLocation=D

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
ifTrueAction5 = [!SetOption MeasureBackground Formula 500][!WriteKeyValue MeasureBackground ifTrueAction "[!SetOption MeasureBackground Formula 1]" "#@#\Settings\Ame\Task Manager.inc"]
ifCondition6 = (ScreenHours > 999)
ifTrueAction6 = [!SetOption MeasureBackground Formula 1000][!WriteKeyValue MeasureBackground ifTrueAction "[!SetOption MeasureBackground Formula 2]" "#@#\Settings\Ame\Task Manager.inc"]

