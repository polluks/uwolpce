;........................................................................................
; waveTable.inc - definitions of 'standard' waves.                                        
;........................................................................................

;------------------------------------------------------------------------------------------
; wave #0  ($00)
;
psgWaves:
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f

;
; wave #1 ($01)
;
	.db $10,$0d,$0a,$07
	.db $05,$03,$02,$01
	.db $00,$01,$02,$03
	.db $05,$07,$09,$0d
	.db $0f,$12,$15,$17
	.db $19,$1b,$1d,$1e
	.db $1e,$1e,$1d,$1b
	.db $19,$17,$15,$13

;
; wave #2 ($02)
;
	.db $10,$11,$12,$13
	.db $14,$15,$16,$17
	.db $18,$19,$1a,$1b
	.db $1c,$1d,$1e,$1f
	.db $00,$01,$02,$03
	.db $04,$05,$06,$07
	.db $08,$09,$0a,$0b
	.db $0c,$0d,$0e,$0f

;
; wave #3 ($03)
;
	.db $05,$05,$09,$09
	.db $02,$16,$16,$10
	.db $10,$1f,$1f,$0e
	.db $0e,$04,$04,$12
	.db $19,$19,$09,$09
	.db $02,$02,$13,$13
	.db $07,$07,$1e,$1e
	.db $0b,$0b,$15,$15

;
; wave #4 ($04)
;
	.db $0f,$0b,$0f,$11
	.db $0f,$0d,$0f,$10
	.db $10,$10,$10,$07
	.db $07,$07,$10,$07
	.db $01,$07,$10,$17
	.db $1e,$17,$10,$07
	.db $01,$07,$10,$17
	.db $0f,$07,$10,$13

;
; wave #5 ($05)
;
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $00,$00,$00,$1f
	.db $1e,$1c,$1a,$18
	.db $16,$14,$12,$10
	.db $0e,$0c,$0a,$08
	.db $06,$04,$02,$01

;
; wave #6 ($06)
;
	.db $10,$06,$03,$02
	.db $01,$00,$00,$00
	.db $00,$00,$00,$01
	.db $01,$02,$03,$06
	.db $10,$19,$1c,$1d
	.db $1e,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1e,$1d,$1c,$19

;
; wave #7 ($07)
;
	.db $1d,$0f,$09,$05
	.db $03,$01,$03,$05
	.db $09,$0f,$15,$19
	.db $1b,$1d,$1b,$19
	.db $15,$0f,$07,$03
	.db $01,$03,$07,$0f
	.db $17,$1b,$1d,$1b
	.db $17,$0f,$01,$0f

;
; wave #8 ($08)
;
	.db $10,$13,$16,$18
	.db $1b,$1d,$1e,$1f
	.db $1f,$1f,$1e,$1d
	.db $1b,$18,$16,$13
	.db $10,$0c,$09,$07
	.db $04,$02,$01,$01
	.db $01,$01,$01,$02
	.db $04,$07,$09,$0c

;
; wave #9 ($09)
;
	.db $1b,$1d,$1b,$17
	.db $0f,$0f,$15,$19
	.db $19,$15,$0f,$0f
	.db $09,$05,$05,$09
	.db $0f,$0f,$0d,$07
	.db $03,$01,$03,$09
	.db $11,$13,$13,$0f
	.db $0b,$0b,$0d,$17

;
; wave #10 ($0a)
;
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $01,$01,$01,$01
	.db $01,$01,$01,$01

;
; wave #11 ($0b)
;
	.db $1f,$00,$04,$06
	.db $08,$0a,$0c,$0e
	.db $10,$12,$14,$16
	.db $18,$1a,$1c,$1e
	.db $1f,$1e,$1c,$1a
	.db $18,$16,$14,$12
	.db $10,$0e,$0c,$0a
	.db $08,$06,$04,$02

;
; wave #12 ($0c)
;
	.db $12,$10,$1a,$1f
	.db $18,$0d,$14,$1c
	.db $18,$12,$18,$1c
	.db $10,$01,$05,$0b
	.db $05,$01,$09,$10
	.db $05,$00,$03,$0d
	.db $09,$07,$10,$1a
	.db $0d,$03,$10,$14

;
; wave #13 ($0d)
;
	.db $0f,$15,$17,$18
	.db $1a,$1d,$1e,$10
	.db $1f,$1f,$1d,$1c
	.db $1a,$18,$14,$10
	.db $0f,$0f,$0b,$07
	.db $05,$03,$02,$10
	.db $00,$01,$01,$02
	.db $05,$07,$08,$10

;
; wave #14 ($0e)
;
	.db $1f,$1e,$1b,$17
	.db $13,$0f,$0b,$07
	.db $03,$0f,$0c,$09
	.db $07,$04,$02,$01
	.db $00,$00,$01,$02
	.db $04,$07,$09,$0c
	.db $1f,$1b,$17,$13
	.db $0f,$0b,$07,$03

;
; wave #15 ($0f)
;
	.db $18,$1f,$1d,$1d
	.db $1f,$1c,$14,$0f
	.db $12,$1c,$1e,$12
	.db $05,$02,$03,$0a
	.db $15,$1c,$1d,$1a
	.db $0d,$01,$03,$0d
	.db $10,$0b,$03,$00
	.db $02,$02,$00,$07

;
; wave #16 ($10)
;
	.db $1f,$00,$1f,$00
	.db $1f,$00,$1f,$00
	.db $1f,$00,$1f,$00
	.db $1f,$00,$1f,$00
	.db $1f,$00,$1f,$00
	.db $1f,$00,$1f,$00
	.db $1f,$00,$1f,$00
	.db $1f,$00,$1f,$00

;
; wave #17 ($11)
;
	.db $0d,$0f,$0b,$00
	.db $10,$1e,$1d,$1f
	.db $13,$10,$0f,$04
	.db $0e,$0d,$10,$01
	.db $00,$02,$02,$0e
	.db $01,$0d,$0f,$10
	.db $0e,$01,$01,$03
	.db $0e,$01,$01,$00

;
; wave #18 ($12)
;
	.db $10,$1a,$1f,$1c
	.db $14,$10,$11,$14
	.db $16,$14,$11,$10
	.db $14,$1c,$1f,$1a
	.db $10,$05,$01,$03
	.db $0b,$0f,$0e,$0b
	.db $09,$0b,$0e,$0f
	.db $0b,$03,$01,$05

;
; wave #19 ($13)
;
	.db $16,$1e,$1e,$17
	.db $0d,$06,$01,$00
	.db $00,$00,$00,$00
	.db $01,$03,$07,$0c
	.db $13,$18,$1c,$1e
	.db $1f,$1f,$1f,$1f
	.db $1f,$1e,$19,$12
	.db $08,$01,$01,$09

;
; wave #20 ($14)
;
	.db $14,$1a,$1e,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1f,$1e,$1a,$14
	.db $0b,$05,$01,$00
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $00,$01,$05,$0b

;
; wave #21 ($15)
;
	.db $17,$1e,$1d,$17
	.db $10,$16,$1f,$1c
	.db $1a,$1e,$1f,$1f
	.db $1c,$0e,$07,$0a
	.db $14,$18,$11,$03
	.db $00,$00,$01,$05
	.db $03,$00,$09,$0f
	.db $08,$02,$01,$08

;
; wave #22 ($16)
;
	.db $18,$1e,$19,$0f
	.db $12,$1e,$1d,$1e
	.db $1e,$1d,$1e,$12
	.db $0f,$19,$1e,$18
	.db $07,$01,$06,$10
	.db $0d,$01,$02,$01
	.db $01,$02,$01,$0d
	.db $10,$06,$01,$07

;
; wave #23 ($17)
;
	.db $10,$16,$1a,$1c
	.db $1e,$1c,$1a,$16
	.db $10,$0a,$06,$04
	.db $02,$04,$06,$0a
	.db $10,$18,$1c,$1e
	.db $1c,$18,$10,$08
	.db $02,$08,$10,$1e
	.db $10,$02,$10,$02

;
; wave #24 ($18)
;
	.db $10,$13,$16,$18
	.db $1b,$1d,$1e,$1f
	.db $1f,$1f,$1e,$1d
	.db $1b,$18,$16,$13
	.db $10,$01,$04,$08
	.db $0c,$10,$14,$18
	.db $1c,$01,$04,$08
	.db $0c,$10,$14,$18

;
; wave #25 ($19)
;
	.db $1a,$1c,$1d,$1e
	.db $1f,$1f,$1f,$1f
	.db $1f,$1f,$1f,$1f
	.db $1e,$1d,$1b,$19
	.db $06,$04,$02,$01
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $01,$02,$04,$06

;
; wave #26 ($1a)
;
	.db $1b,$14,$10,$0e
	.db $0c,$0b,$16,$09
	.db $02,$07,$0a,$05
	.db $03,$03,$02,$01
	.db $0b,$15,$1c,$1e
	.db $1a,$0c,$15,$19
	.db $0c,$18,$07,$12
	.db $0c,$09,$16,$1a

;
; wave #27 ($1b)
;
	.db $0f,$15,$1a,$1c
	.db $1f,$1c,$1a,$15
	.db $0f,$08,$04,$02
	.db $00,$02,$04,$08
	.db $0f,$17,$1c,$1f
	.db $1c,$17,$0f,$06
	.db $01,$02,$07,$0f
	.db $0f,$13,$0f,$00

;
; wave #28 ($1c)
;
	.db $1f,$1b,$19,$1c
	.db $1f,$1c,$1a,$17
	.db $0c,$04,$03,$02
	.db $08,$0e,$0d,$04
	.db $00,$06,$09,$05
	.db $00,$00,$00,$01
	.db $0a,$10,$11,$12
	.db $0e,$0c,$0e,$19

;
; wave #29 ($1d)
;
	.db $0f,$02,$11,$1f
	.db $0f,$1c,$0d,$00
	.db $0f,$02,$11,$1f
	.db $0f,$1c,$0d,$00
	.db $0f,$02,$11,$1f
	.db $0f,$1c,$0d,$00
	.db $0f,$02,$11,$1f
	.db $0f,$1c,$0d,$00

;
; wave #30 ($1e)
;
	.db $10,$0a,$14,$1c
	.db $15,$1d,$16,$10
	.db $18,$11,$18,$1f
	.db $15,$1b,$12,$0a
	.db $10,$08,$0e,$14
	.db $0a,$10,$07,$00
	.db $08,$01,$09,$12
	.db $0a,$12,$0b,$06

;
; wave #31 ($1f)
;
	.db $12,$19,$1d,$1e
	.db $1f,$1f,$1f,$1e
	.db $1c,$17,$12,$0c
	.db $0d,$12,$16,$11
	.db $08,$04,$01,$00
	.db $00,$00,$00,$00
	.db $00,$00,$00,$00
	.db $00,$01,$04,$0c

;
; wave #32 ($20)
;
	.db $04,$14,$1e,$17
	.db $00,$17,$1e,$16
	.db $10,$1a,$1f,$1c
	.db $12,$16,$18,$10
	.db $06,$12,$1c,$10
	.db $0c,$0e,$10,$06
	.db $02,$08,$12,$0c
	.db $04,$08,$0e,$08

;
; wave #33 ($21)
;
	.db $0a,$0c,$0e,$0f
	.db $1f,$1f,$1f,$1f
	.db $14,$14,$13,$12
	.db $1b,$1b,$1b,$1b
	.db $0a,$08,$06,$04
	.db $0e,$0e,$0e,$0e
	.db $00,$00,$00,$02
	.db $13,$13,$13,$13

;
; wave #34 ($22)
;
	.db $1b,$1b,$05,$05
	.db $09,$09,$1f,$1f
	.db $1b,$1b,$16,$16
	.db $1a,$1a,$07,$07
	.db $17,$17,$15,$15
	.db $19,$19,$0c,$0c
	.db $1b,$1b,$0c,$0c
	.db $00,$00,$03,$03

;
; wave #35 ($23)
;
	.db $1f,$1d,$1b,$19
	.db $17,$15,$13,$11
	.db $0f,$0d,$0b,$09
	.db $07,$05,$03,$01
	.db $00,$0f,$11,$0d
	.db $13,$0b,$15,$09
	.db $17,$07,$19,$05
	.db $1b,$03,$1d,$01

;
; ;wave #36 ($24)
;
	.db $0b,$0e,$11,$13
	.db $1f,$1d,$1a,$17
	.db $09,$05,$02,$00
	.db $0a,$0b,$0e,$11
	.db $0b,$0e,$1b,$1e
	.db $14,$12,$1a,$17
	.db $09,$05,$0d,$0a
	.db $00,$01,$0e,$11

;
; wave #37 ($25)
;
	.db $0f,$16,$1b,$1e
	.db $1f,$1e,$1b,$16
	.db $0f,$08,$04,$01
	.db $00,$01,$04,$08
	.db $0f,$00,$00,$00
	.db $1f,$1f,$1f,$1f
	.db $1c,$18,$14,$10
	.db $0c,$07,$03,$00

;
; wave #38 ($26)
;
	.db $02,$01,$05,$0b
	.db $11,$17,$1b,$1f
	.db $1e,$1b,$17,$13
	.db $0f,$0b,$09,$0e
	.db $18,$1d,$1c,$17
	.db $0f,$0a,$07,$06
	.db $11,$19,$1a,$19
	.db $10,$0b,$06,$03

;
; wave #39 ($27)
;
	.db $1d,$1d,$1d,$10
	.db $10,$10,$1d,$1d
	.db $1d,$1d,$1b,$1b
	.db $1b,$1b,$1b,$1b
	.db $00,$00,$00,$00
	.db $00,$00,$02,$02
	.db $02,$02,$10,$10
	.db $10,$02,$02,$02

;
; wave #40 ($28)
;
	.db $19,$16,$10,$12
	.db $12,$09,$16,$1f
	.db $0f,$17,$0f,$10
	.db $1d,$13,$11,$10
	.db $0e,$19,$1b,$00
	.db $0f,$03,$0c,$12
	.db $17,$0f,$16,$11
	.db $12,$05,$0d,$06

;
; wave #41 ($29)
;
	.db $00,$07,$0b,$0b
	.db $09,$03,$00,$01
	.db $17,$17,$15,$10
	.db $0c,$0a,$0d,$13
	.db $07,$0e,$12,$11
	.db $0f,$09,$07,$07
	.db $1f,$1e,$1d,$17
	.db $13,$11,$13,$1a

;
; wave #42 ($2a)
;
	.db $19,$04,$03,$03
	.db $02,$02,$01,$01
	.db $03,$03,$01,$01
	.db $01,$01,$00,$01
	.db $00,$01,$19,$19
	.db $1b,$1b,$1b,$1b
	.db $19,$1e,$1e,$1e
	.db $0d,$1e,$19,$04

;
; wave #43 ($2b)
;
	.db $0f,$15,$19,$1b
	.db $1d,$1e,$1f,$1e
	.db $1d,$1b,$19,$15
	.db $0f,$07,$17,$0a
	.db $14,$0d,$12,$0f
	.db $10,$0a,$06,$04
	.db $02,$01,$00,$01
	.db $02,$04,$06,$0a

;
; wave #44 ($2c)
;
	.db $09,$18,$1d,$0b
	.db $00,$06,$13,$1c
	.db $18,$10,$06,$02
	.db $00,$00,$00,$00
	.db $02,$08,$16,$1b
	.db $09,$03,$10,$1e
	.db $1e,$1b,$16,$0b
	.db $05,$01,$00,$00
;
; OK to here -----------------
;
psgWaveTableEnd = *			; table end is here
psgWaveEntries  = (psgWaveTableEnd - psgWaves) / 32
