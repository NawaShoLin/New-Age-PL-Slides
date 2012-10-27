s = 'Prof. T.C. Chiang'   # => "Prof. T.C. Chiang i 90"

s = s + ' i 90'           # => "Prof. T.C. Chiang i 90"

s.length                  # => 22

s['i 90'] = 'loves Jolin' # => "Prof. T.C. Chiang loves Jolin"
s[11]                     # => "C"
s[11..-1]                 # => "Chiang loves Jolin"

'Chiang' > 'Jolin'        # => false

'2012'.to_i               # => 2012 (Fixnum)
