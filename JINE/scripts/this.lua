function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "その返しウザっ",
                "ちゃんと聞いてないでしょ？？？",
                "ウザっ",
                "（真面目に聞いてないな・・・・・・）",
                "イヤな返し！",
                "返しが雑！",
                "「それな」って使うヤツ一番キライ！",
                "ちゃんと読んでる？？？",
                "テキトーすぎ！",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end