cmake_minimum_required(VERSION 3.0.0)

set( VAR a b c;d "e;f" 2.7 "Hello There")
message(${VAR})

list(APPEND VAR 1.6 XX)
message( ${VAR} )

list(REMOVE_AT VAR 2 -3)
message( ${VAR} )

list(REMOVE_ITEM VAR a 2.7)
message( ${VAR} )

list(INSERT VAR 2 XX 2.7)
message( ${VAR} )

list(REVERSE VAR)
message( ${VAR} )

list( REMOVE_DUPLICATES VAR)
message( ${VAR} )

list(SORT VAR)
message( ${VAR} )