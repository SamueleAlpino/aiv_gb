section "code" , rom0
ld a , 2
ld b , 3
add a, b
;5

ld c, a
add a, c
;7

ld d, a 
add a , d
;9

ld e, a
add a, e 
;11

ld l, a
add a, l
;13

ld h , a 
add a, h 
;15

ld [hl], a 
add a,[hl]
;17

add a, a 
;19

adc a, b
;22

adc a,c
;24
adc a,d 
;26
adc a, e
;28
adc a, l 
;30
adc a, h 
;32
adc a,[hl]
;34
adc a, a
;68

ld [hl], 200
add a, [hl]
;carry 1
;a = 13
;ticks = 124
