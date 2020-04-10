a,b = gets.split(' ')
ans = 0
if a.length >= 2 || b.length >= 2
  ans = -1
else
  ans = a.to_i * b.to_i
end

puts ans