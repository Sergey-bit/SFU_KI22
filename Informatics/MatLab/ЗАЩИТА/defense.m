function ret = defense(matrix)
    % Принимает в качестве параметра прямоугольную матрицу,
    % в ней переворачивает строки, у которых наименьший элемент меньше 0.5

  matrix(min(matrix')(1, :) < 0.5, :) = fliplr(matrix(min(matrix')(1, :) < 0.5, :));
  ret = matrix;
endfunction
