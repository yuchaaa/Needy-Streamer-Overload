function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "LOVE..........",
                "なにがLOVEだ　わたしも好きだよ <3",
                "もっとLOVE送って",
                "愛",
                "好き・・・・・・",
                "愛してるよ<3",
                "ぜったい思ってないでしょ",
                "責任持って一生愛してね",
                "ありえないと思うけど、浮気したらもちろん殺すから",
                "あと999999回言って",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end