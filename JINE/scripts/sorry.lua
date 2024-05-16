function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "許さない絶対にだ",
                "絶対に許さないよ",
                "うーん・・・・・・許す！！！",
                "許してあげ・・・・・・よっかな",
                "アイス買ってきたら許す",
                "土下座の自撮り送って",
                "いいよ<3（やさしい）",
                "簡単に頭を下げるな！",
                "ゆる・・・・・・・・・さない！",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end