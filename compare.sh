#!/bin/bash

# Arquivos temporários para armazenar saídas
original_output="original.txt"
custom_output="custom.txt"

gcc original.c -L. -lftprintf -o original.out # Compila o programa original
./original.out | grep "original printf" | sed 's/original printf //' > "$original_output"

gcc custom.c -L. -lftprintf -o custom.out # Compila o programa com ft_printf
./custom.out | grep "custom printf" | sed 's/custom printf //' > "$custom_output"

# Compara os arquivos linha por linha
echo "Comparando outputs..."
while IFS= read -r original_line && IFS= read -r custom_line <&3; do
    if [ "$original_line" == "$custom_line" ]; then
        echo "OK"
    else
        echo "NOT OK"
        echo "Esperado: '$original_line'"
        echo "Obtido  : '$custom_line'"
    fi
done < "$original_output" 3< "$custom_output"

# Limpa arquivos temporários
rm -f "$original_output" "$custom_output"
