function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "死亡確認",
                "死なないで",
                "いま蘇らせるから待ってて",
                "し、死んでる・・・・・・",
                "死ーん",
                "来世でも恋人でいようね",
                "オタクはすぐ死ぬ",
                "死ぬなーーーーっ！！！",
                "ピが死んだらあめちゃんも死ぬから",
                "あめちゃんが死ぬまでは生きてね",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end