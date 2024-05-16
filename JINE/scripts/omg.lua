function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "だろ？ わかってんじゃん",
                "最高だよーん",
                "でしょ<3",
                "もっと褒めて！！！",
                "わたしは最高の女だよ",
                "へへっ こんなもんよ",
                "あめちゃんは最高",
                "もっと愛をこめて！",
                "ピの「最高」は軽いんだよな～",
                "最高の彼女のこと一生離すなよ",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end