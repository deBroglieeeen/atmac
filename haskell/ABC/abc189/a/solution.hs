main = do
   (c1:c2:c3:_) <- getLine
   let ans = if c1 == c2 && c2 == c3 && c1 == c3 then "Won" else "Lost"
   putStrLn ans
