program ej2
    print *, "Torres de hanoi con 3 discos."
    call hanoi(3, 'A', 'C', 'B')
contains
    ! declaramos una subrutina recursiva por... ?, la neta quien sabe xD, al parecer segun sus creadores, Fortran nunca se pensó como un lenguaje que use otro paradigma más que el iterativo, algo que tiene sentido ya que, fue pensado principalmente (y casi unicamente al parecer) para trayectorias de misiles y cohetes espaciales...; que resuelve el problema de las torres de hanoi
    recursive subroutine hanoi(n, Origen, Destino, Aux) ! auqnue dice que se usen 3 parametros no especifica si el numero de postes se incluye, además de que se hace complejo por que se pondrian poner 20 postes y pensar que solo hubo 3 :v
        integer :: n
        character(len=1) :: Origen, Destino, Aux
        ! Si hay solamente un disco, este se mueve directamente de origen a destino
        if (n .eq. 1) then
            print *, Origen, " - ", Destino
        else
            ! mover n-1 discos de origen a auxiliar usando el destino como auxiliar
            call hanoi(n-1, Origen, Aux, Destino)
            ! mover el enésimo disco del origen al destino
            print *, Origen, " - ", Destino
            ! mover al enésimo - 1 discos, del poste auxiliar al destino usando origen como auxiliar
            call hanoi(n-1, Aux, Destino, Origen)
        end if
    end subroutine hanoi
end program ej2
