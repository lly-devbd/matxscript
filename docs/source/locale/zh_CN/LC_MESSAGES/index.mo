��          �               ,     -  (   =     f     o     x  
     6   �     �     �     �     �    �  .        <  3   H  &   |  }  �     !     .     L     Y     `     m  8   z     �     �     �     �  Z  �  ;   <     x     �     �   A Quick Example Accelerate some offline MapReduce tasks. Advanced Appendix Basics Benchmarks Currently matx is widely used in Bytedance. Including: Design Philosophy Examples Indices and tables Introduction MATXScript(Matx) is a high-performance, extensible Python AOT compiler that compiles Python class/function to C++ without any runtime overhead. Typical speedups over Python are on the order of 10-100x. Matx supports pmap which can lead to speedups many times higher still. Provide flexibility for some C++ engines, etc. Quick Start Unify the training and inference for deep learning. Welcome to MATXScript's documentation! Project-Id-Version: Matxscript 
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2023-01-06 17:39+0800
PO-Revision-Date: YEAR-MO-DA HO:MI+ZONE
Last-Translator: FULL NAME <EMAIL@ADDRESS>
Language: zh_CN
Language-Team: zh_CN <LL@li.org>
Plural-Forms: nplurals=1; plural=0;
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
Generated-By: Babel 2.11.0
 简单示例 加速一些 MapReduce 任务 高级用法 附录 基础知识 性能测试 当前，Matx 已在字节跳动广泛使用，包括： 设计哲学 应用案例 索引页面 简介 MATXScript(Matx) 是一个高性能可扩展的 Python 编译器，可以自动化把 Python 类或函数翻译成 C++，运行时完全没有 Python 开销。在一些典型的场景中，通常可以获得 10-100 倍的性能提升。另外，Matx 通过 pmap 原语支持无锁多线程，在上面基础上，还可以进一步提升性能。 为一些 C++ 引擎提供灵活逻辑热加载能力等等 快速开始 实现了模型的训推一体 欢迎浏览 