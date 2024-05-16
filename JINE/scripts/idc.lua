function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "よくなーい！！！",
                "^o^",
                "恋人の話がどうでもいい！？",
                "その反応が一番傷つく・・・・・・嘘本当はどうでもいい",
                "ホントにどうでもよさそうな顔",
                "真剣になれ！！！",
                "ちゃんと聞いてくれないと別れる　嘘・・・・・・別れたくない",
                "ひっぱたきたくなる笑顔",
                "「わりと」ってのが余計ムカつく返事",
                "もういい！ オタクにかまってもらうから　・・・・・・やっぱりピがいい",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end