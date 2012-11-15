def fib(n)
  if n < 2
    n
  else
    fib(n-1) + fib(n-2)
  end
end

puts fib(5) # => 5
puts fib 6  # => 8
