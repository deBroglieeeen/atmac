main = do
  (n:price:rate) <- getLine
  let nn = charToInt n
  let p = charToDouble price
  let r = charToDouble rate
 -- putStrLn ("" +comp n p r)
  putStrLn $ comp nn p r

-- n$B$rMB$1$kG/?t(B,price$B$rAm3[(B,rate$B$rMxN($H$7!"J#Mx7W;;$r$9$k(B
comp :: Int -> Double -> Double -> Double
comp 0 price rate = price * rate
comp n price rate = comp (n - 1) price rate * rate

-- String$B$+$i(Bdouble$BJQ49(B
charToDouble str = read String :: Double

-- String$B$+$i(Bint$BJQ(B
charToInt cha = read String :: Int
