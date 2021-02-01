main = do
  (n:price:rate) <- getLine
  let nn = charToInt n
  let p = charToDouble price
  let r = charToDouble rate
 -- putStrLn ("" +comp n p r)
  putStrLn $ comp nn p r

-- nを預ける年数,priceを総額,rateを利率とし、複利計算をする
comp :: Int -> Double -> Double -> Double
comp 0 price rate = price * rate
comp n price rate = comp (n - 1) price rate * rate

-- Stringからdouble変換
charToDouble str = read String :: Double

-- Stringからint変
charToInt cha = read String :: Int
