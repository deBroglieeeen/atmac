N,R = gets.chomp.split(' ').map(&:to_i)
puts (N < 10) ? R + 100 * (10 - N) : R