k,x = gets.split(' ').map(&:to_i)
result = k * 500
ans = "No"
if result >= x
  ans = "Yes"
end

puts ans