%% 10

function s = flip_stats (nflip, nexp)
  s = zeros(1, nflip + 1);
  for i=1:nexp
    s(sum_heads(coin_flip(nflip)) + 1) += 1;
  end
end
